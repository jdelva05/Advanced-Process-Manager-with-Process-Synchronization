// process_manager.c

#include "process_manager.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <pthread.h>
#include <signal.h>
#include <string.h>


pthread_mutex_t lock;

void *thread_sync_demo(void *arg) {
    if(pthread_mutex_lock(&lock) != 0) {
        perror("Mutex lock failed");
        return NULL;
    }

    printf("Thread %lu started with arg: %s\n", (unsigned long)pthread_self(), (char *)arg);
    sleep(2);  // Simulate some work
    printf("Thread %lu finishing...\n", (unsigned long)pthread_self());

    if(pthread_mutex_unlock(&lock) != 0) {
        perror("Mutex unlock failed");
    }
    
    return NULL;
}

void ipc_demo() {
    int pipefd[2];
    char buf[100];
    pid_t cpid;

    if (pipe(pipefd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    cpid = fork();
    if (cpid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (cpid == 0) {  // Child
        close(pipefd[1]);
        
        ssize_t bytesRead = read(pipefd[0], buf, sizeof(buf) - 1);
        if(bytesRead == -1) {
            perror("Read from pipe failed");
            _exit(EXIT_FAILURE);
        }
        
        buf[bytesRead] = '\0';  // Null terminate the read string
        
        printf("Child received message: %s\n", buf);
        close(pipefd[0]);
        _exit(EXIT_SUCCESS);
    } else {  // Parent
        close(pipefd[0]);
        
        if(write(pipefd[1], "Hello from parent!", 18) == -1) {
            perror("Write to pipe failed");
            close(pipefd[1]);
            exit(EXIT_FAILURE);
        }
        
        close(pipefd[1]);
        wait(NULL);
    }
}
void *thread_start(void *arg) {
    printf("Thread %lu started with arg: %s\n", (unsigned long)pthread_self(), (char *)arg);
    return NULL;
}

void create_process(const char *path_to_executable) {
    pid_t pid = fork();
    if (pid == 0) {
        execl(path_to_executable, path_to_executable, NULL);
        perror("execl");
        exit(EXIT_FAILURE);
    } else if (pid < 0) {
        perror("fork");
    }
}

void list_processes() {
    printf("Listing processes is not implemented in this demo.\n");
}

void terminate_process(int pid) {
    kill(pid, SIGTERM); // Sending SIGTERM to terminate the process with given PID
}

void create_thread(void *(*start_routine)(void *), void *arg) {
    pthread_t thread;
    if (pthread_create(&thread, NULL, start_routine, arg) != 0) {
        perror("Thread creation failed");
    } else {
        pthread_detach(thread); // This ensures that thread resources are automatically freed upon termination.
    }
}

int init_mutex() {
    if(pthread_mutex_init(&lock, NULL) != 0) {
        perror("Mutex initialization failed");
        return -1;
    }
    return 0;
}

void cleanup_mutex() {
    pthread_mutex_destroy(&lock);
}



