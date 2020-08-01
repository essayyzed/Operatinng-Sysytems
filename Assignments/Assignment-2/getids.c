/*getppid : print a child's and its parent's process ID numbers*/
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    printf("My process ID is %d\n", getpid());
    printf("My parent's process ID is %d\n", getppid());
    exit(0);

}