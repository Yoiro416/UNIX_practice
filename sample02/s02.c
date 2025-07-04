#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
  char buf[1024];

  read(0, buf, 9);//read from keyboard
  //Waiting for the input from keyboard

  write(1, buf, 9);//write to prompt
  return 0;
}
