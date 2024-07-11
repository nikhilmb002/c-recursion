#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include "ipc.h"

static int msgid = -1;

int init_msg_queue() {

	msgid = msgget(MSG_KEY, IPC_CREAT | 0666);
	return msgid;
}

int send_task(msg_t *msg) {

	return msgsnd(msgid, msg, sizeof(task_t), 0);
}

int receive_task(msg_t *msg) {
	
	return msgrcv(msgid, msg, sizeof(task_t), 1, 0);
}
