// process_manager.h

#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_H

void create_process(const char *path_to_executable);
void list_processes();
void terminate_process(int pid);
void create_thread(void *(*start_routine)(void *), void *arg);
void list_threads();
void ipc_demo();
void *thread_sync_demo(void *arg);
void *thread_start(void *arg);
int init_mutex();
void cleanup_mutex();

#endif // PROCESS_MANAGER_H

