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


2. Thread_sync_demo command:<br>
<img width="371" alt="Screenshot 2023-10-29 at 11 58 04 PM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/70e88be4-7e75-40f3-a94d-88ad36ef764c"><br>
- Creates a thread that locks a mutex, prints a starting message, sleeps for 2 seconds, prints a finishing message, and then unlocks the mutex.


3. Terminate_process command:
<img width="302" alt="Screenshot 2023-10-29 at 11 58 42 PM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/d3685d67-02bb-496c-a973-7236aef283e3"><br>


4. List_processes command:<br>
<img width="314" alt="Screenshot 2023-10-29 at 11 59 06 PM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/ad3eb221-b008-4c61-b71c-75f74870f21e"><br>
- This feature is a demo placeholder and informs the user that it's not fully implemented.


5. Create_process command:<br>
<img width="509" alt="Screenshot 2023-10-29 at 11 59 59 PM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/6b2a7ba9-e5de-4e70-aeeb-323d7d738daf">

6. Ipc_demo command:<br>
<img width="427" alt="Screenshot 2023-10-30 at 12 00 21 AM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/b050d22a-8da6-4c3d-a379-c4cdecde5c2c"><br>
- Demonstrates Inter-Process Communication (IPC) using pipes. The parent sends "Hello from parent!" to the child process, and the child process prints "Child received message: Hello from parent!".

7. Thread Synchronization Demo:<br>
<img width="339" alt="Screenshot 2023-10-30 at 12 00 53 AM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/cf58528f-86a8-4c2c-8685-da11b04388b7"><br>
- Creates a thread that locks a mutex, prints a starting message, sleeps for 2 seconds, prints a finishing message, and then unlocks the mutex.

<img width="498" alt="Screenshot 2023-10-30 at 12 01 50 AM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/cf37d480-14bb-453d-ace0-36027aed3afa">

8. Exit Cammand:<br>
<img width="212" alt="Screenshot 2023-10-30 at 12 12 58 AM" src="https://github.com/redbolt101/Advanced-Process-Manager-with-Process-Synchronization/assets/132689188/c7b77243-3e0b-4235-a60d-1ff1c66171c1">



