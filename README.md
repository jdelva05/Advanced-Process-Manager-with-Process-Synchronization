# Advanced-Process-Manager-with-Process-Synchronization

## 1. Implemented Functionalities:

-Create a new process.<br>
- List processes (demo implementation).<br>
- Terminate a process given its PID.<br>
- Create a new thread.<br>
- Inter-process communication (IPC) demonstration using a pipe.<br>
- Thread synchronization demo using a mutex.<br>

## 2. Installation Instructions:

- Ensure you have the clang compiler installed.<br>
- Navigate to the directory containing main.c and process_manager.c.<br>
- Compile using the command: /usr/bin/clang -fcolor-diagnostics -fansi-escape-codes -g main.c process_manager.c -o main.<br>
- Execute the program using the command: ./main.<br>

## 3. How to Use:
- process_manager> exit<br>
- process_manager> create_process /bin/ls<br>
- process_manager> list_processes<br>
- process_manager> terminate_process 12345<br>
- process_manager> ipc_demo<br>
- process_manager> thread_sync_demo hello_sync<br>
- process_manager> exit<br>

## Outputs
1. Create_thread command:<br>
<img width="803" alt="Screenshot 2023-10-29 at 11 53 35 PM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/e64dff60-2475-49aa-ac41-1584fa8e4248"><br>
- create_process /bin/ls command is executed, the program creates a new process that lists the contents of the current directory.


2. List_processes command:<br>
<img width="371" alt="Screenshot 2023-10-29 at 11 58 04 PM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/70e88be4-7e75-40f3-a94d-88ad36ef764c"><br>
- Prints a message stating that listing processes is not implemented in this demo.


3. Terminate_process command:<br>
<img width="302" alt="Screenshot 2023-10-29 at 11 58 42 PM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/d3685d67-02bb-496c-a973-7236aef283e3"><br>
Sends a SIGTERM signal to the process with the provided PID to terminate it.


5. Create_thread hello_thread<br>
<img width="509" alt="Screenshot 2023-10-29 at 11 59 59 PM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/6b2a7ba9-e5de-4e70-aeeb-323d7d738daf"><br>
- Creates a new thread that prints its ID and the argument provided.

6. Ipc_demo command:<br>
<img width="427" alt="Screenshot 2023-10-30 at 12 00 21 AM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/b050d22a-8da6-4c3d-a379-c4cdecde5c2c"><br>
- Demonstrates Inter-Process Communication (IPC) using pipes. The parent sends "Hello from parent!" to the child process, and the child process prints "Child received message: Hello from parent!".

7. Thread_sync_demo command:<br>
<img width="339" alt="Screenshot 2023-10-30 at 12 00 53 AM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/cf58528f-86a8-4c2c-8685-da11b04388b7"><br>
<img width="498" alt="Screenshot 2023-10-30 at 12 01 50 AM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/cf37d480-14bb-453d-ace0-36027aed3afa"><br>
- Creates a thread that locks a mutex, prints a starting message, sleeps for 2 seconds, prints a finishing message, and then unlocks the mutex.

8. Exit Cammand:<br>
<img width="212" alt="Screenshot 2023-10-30 at 12 12 58 AM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/c7b77243-3e0b-4235-a60d-1ff1c66171c1"><br>
- Exits the program.

## Discussion And Project Results
The project effectively illustrates the use of threads and processes for basic tasks, such as synchronization and IPC. Its straightforward design facilitates comprehension and lays the groundwork for future, more sophisticated features.

## Conclusion
In conclusion we set out to comprehend and implement fundamental thread and process management functionalities in a UNIX-like system during the course of this project. The project did a good job of illustrating the complexities of thread synchronization with mutexes, inter-process communication, and process creation. While the implementation of key functionalities, like creating, listing, terminating, and creating threads, went well, the process listing functionality was noticeably absent and may require further development.

The project demonstrated the fundamental ideas of multitasking operating systems, but it also brought attention to the difficulties in coordinating and communicating across various execution units. A key component of UNIX IPC, the ipc_demo specifically illustrated the smooth communication via pipes between parent and child processes.

The functionality mostly functioned as expected, according to the testing results, demonstrating the code's resilience. But since functions like create_process handle important operations, it became clear how important error handling is.

