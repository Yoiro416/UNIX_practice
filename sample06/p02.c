/* -*- coding: utf-8 -*- */
/*
  p02.c
  2021/04/27
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>


int main(int argc, char **argv) {
  int status;
  pid_t pid, ppid;;
  pid = getpid();
  printf("p02: PID: %d\n", pid);
  fflush(stdout);
  if((ppid = fork()) == 0) {
    execlp("./c01", "c01", (char*)0);
    perror("execlp");
    exit(0);
  }
  waitpid(ppid, &status, 0);
  /* waitpid(ppid, &status, WNOHANG); */
  printf("p02: PID: %d\n", pid);
  return 0;
}
