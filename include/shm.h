#ifndef SHM_H
#define SHM_H

#define SHM_KEY 5678

typedef struct {

	int active_workers;
	int completed_tasks;

} shm_data_t;

int init_shared_memory();
shm_data_t* attach_shared_memory();

#endif
