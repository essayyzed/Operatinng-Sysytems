#define _GNU_SOURCE
#include <stdio.h>
#include <sched.h>
#include <stdlib.h>
#include <sys/wait.h>

void fn(void *arg)
{
    printf("\nINFO: This code is running under child process.\n");
}

void main(int argc, char *argv[])
{
    printf("Hello, World!\n");
    int pid = clone(fn, pchild_stack + (1024 * 1024), SIGCHLD, argv[1]);
    if (pid < 0)
    {
        printf("ERROR: Unable to create the child process.\n");
        exit(EXIT_FAILURE);
    }
    wait(NULL);
    free(pchild_stack);
    printf("INFO: Child process terminated.\n");
}