#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    FILE *fp;
    char c;
    int pid;

    fp = stdin;
    while((c=fgetc(fp)) != 'E'){
        if(c == 'c'){
            if(!(pid=fork())){
                printf("I'm child.\n");
                exit(0);
            }
        }
    }
    return 0;
}