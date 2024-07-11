# Linux Task Manager & IPC Based Job Scheduler 

A system level project writtern in **C** that demonstrates Linux process management, IPC mechanisms, signal handling, threading, and daemon development.

This project implements a **controller daemon**, multiple **worker processes**, and a **CLI client** to schedule and execute tasks on a Linux system using **System V IPC**. 

This project implements a **controller daemon**, multiple **worker processes**, and a **CLI client** to schedule and execute tasks on a Linux system using **System V IPC**.

Designed as a learning + portfolio project for **Embedded Linux / Systems Programming engineers**.


## Features


### Core 

 - Controller daemon (background service)
 - Worker process pool
 - Client CLI tool (`taskctl`)
 - Job scheduling and execution
 - Task history logging 



## Linux Concepts Covered 

| Area | Implemented |
|------|------------|
Process Management | `fork()`, `exec()`, `waitpid()`  
IPC | Message Queues, Shared Memory, Semaphores  
Signals | SIGINT, SIGTERM, SIGCHLD  
Threads | `pthread` monitoring thread  
Daemon | `setsid()`, `umask()`, `chdir()`  
File System | Logs, PID files, configs  
Synchronization | Semaphores  
CLI Tool | Argument parsing  
Build System | Makefile  
Service | systemd unit 




## Architecture 

Client (taskctl)
        |
        v
Message Queue  <---->  Controller Daemon
                          |
                          |
                   Worker Processes
                          |
                    Execute Commands
                          |
                    Shared Memory




## Repository Layout 

linux-task-manager/
├── include/
├── src/
│ ├── ipc/
│ ├── process/
│ ├── signal/
│ ├── thread/
│ └── utils/
├── client/
├── config/
├── logs/
├── systemd/
├── debian/
├── docs/
├── Makefile
└── README.md





























