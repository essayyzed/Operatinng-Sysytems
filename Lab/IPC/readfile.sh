#!/bin/bash
filename="/home/essayyzed/Downloads/IPC/client.c"
while IFS= read -r line
do
        # display line or do somthing on $line
        echo "$line"
        ` $line >> output.txt`
done <"$filename"