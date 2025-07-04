CC = gcc

LDFLAGS = 
CFLAGS = -Wall -O2 $(DEBUGOPTS)

all: err01 err02 err03 main01 exit01

err01: err01.c
	$(CC) $(CFLAGS) -o err01 err01.c

err02: err02.c
	$(CC) $(CFLAGS) -o err02 err02.c

err03: err03.c
	$(CC) $(CFLAGS) -o err03 err03.c

main01: main01.c
	$(CC) $(CFLAGS) -o main01 main01.c

exit01: exit01.c
	$(CC) $(CFLAGS) -o exit01 exit01.c

clean:
	-rm -f err01 err02 err03 err01.o err02.o err03.o main01 main01.o \
	exit01 exit01.o

