#include <stdio.h>
#include <unistd.h>
#include "ipc.h"

extern void worker_loop();

int main() {

	init_msg_queue();
	
	if (fork() == 0) {

		worker_loop();
		return 0;
	}
	
	while(1)
		
		sleep(1);
}
