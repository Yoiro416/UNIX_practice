#include <stdio.h>
#include <unistd.h>
#include <errno.h>
extern int errno;

int main(void) {
  int e;
  e = unlink("hoge.txt");
  printf("retval: %d\n", e);
  if(e == -1) {
    perror("unlink");
  }
  return 0;
}
