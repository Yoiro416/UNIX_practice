CC = gcc

LDFLAGS = 
CFLAGS = -Wall -O2 $(DEBUGOPTS)

all: s01 s02 s03 q1 q2

s01: s01.c
	$(CC) $(CFLAGS) -o s01 s01.c

s02: s02.c
	$(CC) $(CFLAGS) -o s02 s02.c

s03: s03.c
	$(CC) $(CFLAGS) -o s03 s03.c

q1: q1.c
	$(CC) $(CFLAGS) -o q1 q1.c

q2: q2c
	$(CC) $(CFLAGS) -o q2 q2.c

clean:
	-rm -f s01 s01.o s02 s02.o s03 s03.o q1 q1.o q2 q2.o
