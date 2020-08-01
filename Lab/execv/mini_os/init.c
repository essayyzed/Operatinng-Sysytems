#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void main() {

    printf("init process has been loaded....\n");

    int drivers = fork();
    if (drivers == 0)
    {
      execv("./drivers", NULL);
    }

    int apps = fork();
    if (apps  == 0)
    {
      execv("./apps", NULL);
    }

    else
    {
      wait(NULL);
    }
    
    int system_apps = fork();
    if (system_apps  == 0)
    {
      execv("./system_apps", NULL);
    }

    else
    {
      wait(NULL);
    }
}