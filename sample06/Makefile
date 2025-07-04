#

CC=gcc
OPTS=-O2 -Wall #-DDEBUG

all: c01 p01 p02 p03

c01: c01.c
	$(CC) $(OPTS) c01.c -o c01

p01: p01.c
	$(CC) $(OPTS) p01.c -o p01

p02: p02.c
	$(CC) $(OPTS) p02.c -o p02

p03: p03.c
	$(CC) $(OPTS) p03.c -o p03

clean:
	-rm -f $(OBJS) core c01 p01 p02 p03 *.o

