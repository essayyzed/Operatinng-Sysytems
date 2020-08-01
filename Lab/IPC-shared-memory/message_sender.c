#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MSGZ 128

struct message_buf
{
    long mtype;  //size of the msg
    char mtext[MSGZ]; //msg itself
};


void main()
{
    struct message_buf buf;
    key_t key;
    int msg_id = msgget(key,0777 | IPC_CREAT);
    const char * packets[20][2] = {
									{"1", "U"},
									{"3", "D"},
									{"2", "F"},
									{"3", "I"},
									{"3", "S"},
									{"1", "N"},
									{"3", "C"},
									{"2", "A"},
									{"3", "I"},
									{"1", "I"},
									{"3", "P"},
									{"2", "I"},
									{"3", "L"},
									{"1", "T"},
									{"3", "I"},
									{"2", "T"},
									{"3", "N"},
									{"1", "Y"},
									{"3", "E"},
									{"2", "H"},
								};
    for (int i = 0; i < 20; i++)
    {
                                
        key = 12345;
        buf.mtype = atoi(packets[i][0]);
        printf("%ld\n", buf.mtype);
        strcpy(buf.mtext, packets[i][1]);
        size_t buf_length = strlen(buf.mtext) + 1;

        msgsnd(msg_id, &buf,buf_length, IPC_NOWAIT);
        /*   IPC_NOWAIT = 0  1 -> WAIT   */ 
    }  
}
