#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc,char **argv)
{
	int i,status;
	char buf[256];
	char cmd;
	pid_t pid,ppid;//process ID,parent process ID
	pid = getpid();//self pid
	FILE *fp = stdin;
	

	printf("Parent_PID:%d\n",pid);
	fflush(stdout);
	
	while((cmd=fgetc(fp))!= 'E'){
		if(cmd=='l'){
			if((ppid = fork())==0){
				//Child process ls 
				execlp("ls","ls",(char*)0);
				//no option ls command: (char*)0
				perror("execlp");
				return 0;
			}
		}else if(cmd=='s'){
			if((ppid= fork())==0){
				//Child process ls -Fal
				execlp("ls","ls","-Fal",(char*)0);
				perror("excelp");
				return 0;
			}
		}else if(cmd=='p'){
			if((ppid= fork())==0){
				execlp("ps","ps","-ax",(char*)0);
				perror("excelp");
				return 0;
			}
		}
		waitpid(ppid,&status,0);
		
		//if comment out an above line waitpid(...);, and compile->execute this program, this program will run like below:
		//if you type 'l' or 's' , then child processes show result of "ls" or "ls -Fal". 
		//after that, child processes will be Zombie-processes because the parent process doesn't wait child processes finish
		//type 'p' to see these Zombie-prosesses(defunct processes)
		//
		//if enable waitpid() function, no Zombie-process will shown by 'p'
	}
	printf("Parent process ending...\n");
	return 0;
}
