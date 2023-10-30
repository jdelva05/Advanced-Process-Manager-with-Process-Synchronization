// main.c
#include "process_manager.h"
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>

int main() {
    if(init_mutex() != 0) {
        fprintf(stderr, "Failed to initialize mutex. Exiting...\n");
        return EXIT_FAILURE;
    }
    char command[100];

    while (1) {
        printf("process_manager> ");
        fgets(command, sizeof(command), stdin);
        command[strcspn(command, "\n")] = 0; // remove newline

        if (strcmp(command, "exit") == 0) {
            break;
        } else if (strncmp(command, "create_process ", 15) == 0) {
            create_process(command + 15);
        } else if (strcmp(command, "list_processes") == 0) {
            list_processes();
        } else if (strncmp(command, "terminate_process ", 18) == 0) {
            int pid;
            sscanf(command + 18, "%d", &pid);
            terminate_process(pid);
        } else if (strncmp(command, "create_thread ", 14) == 0) {
            char *thread_arg = command + 14;
            create_thread(thread_start, thread_arg);
        } else if (strcmp(command, "ipc_demo") == 0) {
            ipc_demo();
        } else if (strncmp(command, "thread_sync_demo ", 17) == 0) {
            char *thread_arg = command + 17;
            create_thread(thread_sync_demo, thread_arg);
        } else {
            printf("Unknown command\n");
        }
    }

    cleanup_mutex();
    return 0;
}

