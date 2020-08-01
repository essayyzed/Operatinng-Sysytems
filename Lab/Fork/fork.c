#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void main()
{


    int x = fork();
    int y = fork();
    int z = fork();

   if (x == 0 || y > 0 && z > 0)
   {
       printf("This is OS LAB\n\n");

   }
   else
   {
       printf("Hello World\n\n");
       
   }
   
    




}