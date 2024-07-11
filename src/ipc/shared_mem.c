#include <sys/shm.h>
#include "shm.h"

static int shmid;

int init_shared_memory() {

	shmid = shmget(SHM_KEY, sizeof(shm_data_t), IPC_CREAT | 0666);
	return shmid;
}

shm_data_t* attach_shared_memory() {

	return (shm_data_t*) shmat(shmid, NULL, 0);
}
