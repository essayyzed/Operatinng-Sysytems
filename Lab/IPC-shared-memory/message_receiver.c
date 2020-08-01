#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>

#define MSGSZ 128

struct message_buf
{
    long mtype;  //size of the msg
    char mtext[MSGSZ]; //msg itself
};


void main()
{
    struct message_buf rbuf;
    

    key_t key = 12345;
    int msgid = msgget(key,0666);
    for (int i = 1; i <= 20; i++)
    {
    
        msgrcv(msgid, &rbuf, MSGSZ,i, IPC_NOWAIT);
        /* 4th argument
        => type = 0 nxt msg of any type
        => type +ve recieves next msg where type matches
        => type -ve recieve 1st msg where type matches 
        */

        /*5th Argument
        =>IPC_NOWAIT -> no wait
        =>0-> wait
        */
        printf("%s\n", rbuf.mtext);
    }
}