/* -*- coding: utf-8 -*- */
/*
  c01.c
  2021/04/27
*/
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv) {
  pid_t pid;
  pid = getpid();
  printf("3 -- %s: PID: %d\n", argv[0], pid);
  sleep(1);
  printf("2 -- %s: PID: %d\n", argv[0], pid);
  sleep(1);
  printf("1 -- %s: PID: %d\n", argv[0], pid);
  sleep(1);
  return 27;
}
