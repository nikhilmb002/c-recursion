#ifndef TASK_H
#define TASK_H

#define MAX_CMD_LEN 256

typedef enum {

	TASK_PENDING = 0,
	TASK_RUNNING,
	TASK_DONE

} task_state_t;

typedef struct {

	int task_id;
	char command[MAX_CMD_LEN];
	task_state_t state;

} task_t;

#endif 
