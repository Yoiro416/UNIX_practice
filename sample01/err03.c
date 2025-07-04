#include <stdio.h>
#include <errno.h>
extern int errno;

int main(void) {
  errno = EACCES;
  perror("test");
  errno = ENOMEM;
  perror("test");
  return 0;
}
