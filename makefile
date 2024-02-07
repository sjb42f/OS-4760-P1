# SERENA BRIZARD #
# PROJECT 1 SKELETON MULTIPLE PROCESSES #
# UMSL CS 4760 OPERATING SYSTEMS #
# TERM SPRING 2024 #

CC = gcc -g3
CFLAGS = -g3

.DEFAULT_GOAL
all: user oss

oss: oss.o
	$(CC) -o oss oss.o
user: user.o
	$(CC) -o user user.o


oss.o: oss.c
	$(CC) $(CFLAGS) -c oss.c

user.o: user.c
	$(CC) $(CFLAGS) -c user.c

.PHONY: clean
clean:
  /bin/rm -f *.o all
