#include <stdio.h>
#include <string.h>
#include "ipc.h"

int main(int argc, char **argv) {

	msg_t msg;
	
	if (argc < 3) {

		printf("Usage : taskctl add \"command\"\n");
		return 1;	
	}

	msg.mtype = 1;
	strcpy(msg.task.command, argv[2]);

	init_msg_queue();
	send_task(&msg);

	return 0;
}
