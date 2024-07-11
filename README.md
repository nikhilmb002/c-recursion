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





## 📂 Repository Layout

```text
linux-task-manager/
├── include/            
├── src/               
│   ├── ipc/          
│   ├── process/     
│   ├── signal/     
│   ├── thread/    
│   └── utils/         
├── client/           
├── config/          
├── logs/           
├── systemd/       
├── debian/       
├── docs/        
├── Makefile    
└── README.md           

##  Build Instructions

### Prerequisites


```bash
sudo apt install build-essential



### Compile

From project root:


```bash
make

This generates:

taskmgr   → controller daemon  
taskctl   → client CLI  



## Running

### Start Controller


```bash
sudo ./taskmgr

or using systemd:

```bash
sudo systemctl start taskmgr



### Client Commands

Add task:

```bash
./taskctl add "ls -l"

Check status:

```bash
./taskctl status

Kill worker:


```bash
./taskctl kill 2

View history:


```bash
./taskctl history



## IPC Design

### Message Queue

Used for:

- Sending jobs from client to controller
- Dispatching jobs to workers



### Shared Memory

Stores:

- Worker status
- Active tasks



### Semaphore

Protects shared memory access.



## Signal Handling

Signal   Purpose  
SIGINT   Graceful shutdown  
SIGTERM  Daemon termination  
SIGCHLD  Worker crash detection  


## Learning Objectives

This project helps understand:

- Linux process lifecycle
- IPC mechanisms
- Thread synchronization
- Daemon creation
- System programming in C
- Embedded Linux service design


## Future Enhancements

- Socket-based remote client  
- Web dashboard  
- Priority scheduling  
- Resource limits  
- SQLite logging  
- REST API  


## Author

Nikhil M B  

Embedded Linux | C Programming | DevSecOps  






























