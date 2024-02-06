# SERENA BRIZARD
PROJECT 1 - SKELETON MULTIPLE PROCESSES
UMSL CS 4760 - OPERATING SYSTEMS
TERM - SPRING 2024 #

CC = gcc
CFLAGS = -g

.DEFAULT_GOAL
all: user oss

.SUFFIXES: .c .o
user.o : user.c
		$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

user.o : user.c
		$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

.PHONY: clean
clean:
  rm -f *.c *.o all
