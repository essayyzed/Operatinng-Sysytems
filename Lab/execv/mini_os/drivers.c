#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void main()
{
  printf("Uploading Drivers\n");

  int gui = fork();
  if (gui == 0)
  {
    execv("./gui", NULL);
  }

    int usb = fork();
  if (usb == 0)
  {
    execv("./usb", NULL);
  }

int sdcard = fork();
if (sdcard == 0)
{
  execv("./sdcard", NULL);
}

  int keyboard = fork();
  if (keyboard == 0)
  {
    execv("./keyboard", NULL);
  }


  int mouse = fork();
  if (mouse == 0)
  {
    execv("./mouse", NULL);
  }
  else
  {
    wait(NULL);
  }
  
  
  
}
