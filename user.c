// SERENA BRIZARD
// PROJECT 1 - SKELETON MULTIPLE PROCESSES
// UMSL CS 4760 - OPERATING SYSTEMS
// TERM - SPRING 2024

// takes in one command argument from oss.c
// ex. ./user 5
// As it is being called with the number 5, it would do 5 iterations over a loop.

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char** argv)
{
  int loopiter = atoi(argv[1]);
  for(int i = 1; i <= loopiter; i++) // output for each iteration
  {
    printf("\nUSER PID: %d  PPID: %d  Iteration: %d  before sleeping.\n", getpid(), getppid(), i);
    sleep(1); // One second sleep
    printf("\nUSER PID: %d  PPID: %d  Iteration: %d  after sleeping.\n", getpid(), getppid(), i);
  }
  return 0;
}
