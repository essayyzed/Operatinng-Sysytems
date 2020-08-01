#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main(int argc, char **argv)
{
  
  

  int x = fork();

  if ( x == 0)
  {
    printf("I m Child\n");
    printf("Hello World\n\n\n");
  }
  else
  {
    printf("I m parent\n");
    printf("Hello WOrld\n\n\n");
  }
  
  
  


}