/* -*- coding: utf-8 -*- */
/*
  p03.c
  2021/04/27
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>


int main(int argc, char **argv) {
  int i, status;
  char buf[1024];
  pid_t pid, ppid, rpid;
  pid = getpid();
  printf("p03: PID: %d\n", pid);
  fflush(stdout);
  for(i = 0; i < 3; i++) {
    sprintf(buf, "countp%05d", i);
    if((ppid = fork()) == 0) {
      execlp("./c01", buf, (char*)0);
      perror("execlp");
      exit(0);
    }
    rpid = waitpid(ppid, &status, 0);
    /* rpid = waitpid(0, &status, WNOHANG); */
    /* rpid = waitpid(ppid, &status, WNOHANG); */
    if(WIFEXITED(status)) {
      printf("p03: received staus: %d, PID: %d\n", WEXITSTATUS(status), rpid);
    } else if(WIFSIGNALED(status)) {
      printf("p03: received staus: WIFSIGNALED, PID: %d\n", rpid);
    } else if(WTERMSIG(status)) {
      printf("p03: received staus: WTERMSIG, PID: %d\n", rpid);
    }
    sleep(1);
  }
  printf("p03: PID: %d\n", pid);
  return 0;
}
