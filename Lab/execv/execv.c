#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(int argc, char **argv)
{
  
  

  int x = fork();

  if ( x == 0)
  {
    printf("I m Child\n");
    execv("./first", NULL); //*incase we didn't want to pass any argument/
    printf("Hello World\n\n\n");

    /*IN EXECV THE CONTROL IS TRANSFER TO THE FILE WE MENTION & AFTER ITS TERMINATION IT DIDN't COME BACK TO PROCESS BACK*/
  }

  else
  {
    printf("I m parent\n");
    printf("Hello WOrld\n\n\n");
   
  }
  printf("I M THE LAST LINE\n");


  }