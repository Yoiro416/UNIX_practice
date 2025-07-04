#include <stdio.h>
#include <unistd.h>

int main(void) {
  int e;
  e = unlink("hoge.txt");
  printf("retval: %d\n", e);
  return 0;
}
