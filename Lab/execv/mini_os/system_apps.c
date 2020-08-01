#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void main()
{
  printf("Loading SYSTEM Apps\n\n");

int background = fork();
if (background == 0)
{
  execv("./bg", NULL);
}

int antivirus = fork();
if (antivirus == 0)
{
  execv("./antivirus", NULL);
}

int screensaver = fork();
if (screensaver == 0)
{
  execv("./screensaver", NULL);
}

int default_theme = fork();
if (default_theme == 0)
{
  execv("./df_theme", NULL);
}

else if (default_theme > 0)
{
  wait(NULL);
}
}