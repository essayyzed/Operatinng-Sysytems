#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>

#define SHMSZ 1024
int main()
{
  printf("server side........\n"); 

  key_t key = 12345;
  int shmid = shmget(key, SHMSZ, 0777 | IPC_CREAT);

  char *shm = shmat(shmid, NULL, 0);  

  memcpy(shm, "Hello From Server", SHMSZ);

  printf("end of Server side.....\n");


  return 0;
}


