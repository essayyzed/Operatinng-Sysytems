#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void main()
{
  printf("Loading Apps\n\n");

int firefox = fork();
if (firefox == 0)
{
  execv("./firefox", NULL);
}

int gedit = fork();
if (gedit == 0)
{
  execv("./gedit", NULL);
}

int terminal = fork();
if (terminal == 0)
{
  execv("./terminal", NULL);
}

else if (terminal > 0)
{
  wait(NULL);
}
}
