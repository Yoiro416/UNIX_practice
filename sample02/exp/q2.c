#include <stdio.h>
#include <fcntl.h>//<-this headerfile is for defined values e.g.) O_RDONLY
#include <unistd.h>
#include <string.h>

int main(int argc,char **argv)
{
    if(argc != 3){
        printf("please input 2 option: srcfile and dstfile\n");
        return 1;
    }

    char buf[1024];
    int ret_write,ret_read,readfd,writefd;
    int i=0;

    readfd = open(argv[1],O_RDONLY);
    writefd = open(argv[2],O_RDWR | O_CREAT | O_TRUNC,0666);
    printf("Reading from:%s\nWriting to:%s\n",argv[1],argv[2]);//DEBUG
    
    while(1){
        ret_read = read(readfd,buf,10);
        printf("%d",ret_read);
        // printf("%s\n",buf);
        if(ret_read==EOF)break;
        if(ret_read<=0)break;
        ret_write = write(writefd,buf,ret_read);
    }

    close(readfd);
    close(writefd);
    return 0;
}