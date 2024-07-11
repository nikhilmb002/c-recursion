CC=gcc
CFLAGS=-Wall -pthread -Iinclude

all:
	$(CC) src/main.c src/worker.c src/ipc/msg_queue.c src/ipc/shared_mem.c -o taskmgr $(CFLAGS)
	$(CC) client/taskctl.c src/ipc/msg_queue.c src/ipc/shared_mem.c -o taskctl $(CFLAGS)

clean:
	rm -f taskmgr taskctl

