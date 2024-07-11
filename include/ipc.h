#ifndef IPC_H
#define IPC_H

#include "task.h"

#define MSG_KEY 1234

typedef struct {

	long mtype;
	task_t task;

} msg_t;

int init_msg_queue();
int send_task(msg_t *msg);
int receive_task(msg_t *msg);

#endif 
