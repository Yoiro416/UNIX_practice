#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char **argv) {
  char buf[1024];
  int ret, fd;
  strcpy(buf, "hoge");
  fd = open("hoge.txt", O_WRONLY | O_TRUNC | O_CREAT, 0644);
  ret = write(fd, buf, strlen(buf));
  lseek(fd, -2, SEEK_CUR);
  strcpy(buf, "fuga");
  ret = write(fd, buf, strlen(buf));
  close(fd);
  return 0;
}
