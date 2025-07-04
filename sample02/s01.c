#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
  write(1, "hogehoge\n", 9);
  close(1);
  write(1, "hogehoge\n", 9);
  return 0;
}
