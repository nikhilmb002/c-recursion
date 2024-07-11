#include <stdio.h>
#include <stdlib.h>
#include "ipc.h"

void worker_loop() {

	msg_t msg;

	while(1) {

		receive_task(&msg);
		printf("Worker executing : %s\n", msg.task.command);
		system(msg.task.command);
	}
}
