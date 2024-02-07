// SERENA BRIZARD
// PROJECT 1 - SKELETON MULTIPLE PROCESSES
// UMSL CS 4760 - OPERATING SYSTEMS
// TERM - SPRING 2024
// OSS.C Resources - OS_Tutorials.docx, parent.c, simultaneous limit video

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

void helpmenu()
  {
  printf("----------------------------------------HELP MENU----------------------------------------\n");
  printf("|               Program will run using the following command structure:                 |\n");
  printf("|                       oss [-h] [-n proc] [-s simul] [-t iter]                         |\n");
  printf("|                                                                                       |\n");
  printf("| [-h] will bring you to this screen, the help menu.                                    |\n");           
  printf("|      Will show you how to run this program.                                           |\n");
  printf("| [-n proc] will begin to launch user processes.                                        |\n");
  printf("|           'proc' is the number of times you want to launch.                           |\n");
  printf("| [-s simul] will control how many children are allowed to run simultaneously.          |\n");
  printf("|            'simul' is the number of children allowed at once.                         |\n");
  printf("| [-t iter] will decide the number of tests each user will need to go through to pass.  |\n");
  printf("|           'iter' is the number of iterations the program will run.                    |\n");
  printf("|                                                                                       |\n");
  printf("| Examples of accepted input:                                                           |\n");
  printf("| oss -h                                                                                |\n");
  printf("| oss -n 2 -s 6 -t 5                                                                    |\n");
  printf("| oss -n 5 -s 3 -t 7                                                                    |\n");
  printf("-----------------------------------------------------------------------------------------\n");
  }

int main(int argc, char **argv)
{
  const char optstr[] = "hn:s:t:";
  char opt;
  // Default values for variables
  int proc = 0;
  int simul = 0;
  int iter = 0;
  
  while ((opt = getopt(argc, argv, optstr)) != -1)
    {
      switch (opt)
      {
        case 'h':
          // [-h]
          helpmenu();
          break;
        case 'n':
          // [-n proc]
          proc = atoi(optarg);
          break;
        case 's':
          // [-s simul]
          simul = atoi(optarg);
          break;
        case 't':
          // [-t iter]
          iter = atoi(optarg);
          break;
        default:
          // program will not accept other entries
          break;
      }
    }
  
    char itercurrent[10];
    sprintf(itercurrent, "%d", iter); // int to char
for (int i=0; i < proc; i++){
      // launch child process
      pid_t userpid = fork(); 
  
      if (userpid == 0){
        char args[] = {"./user", itercurrent, NULL};
        execvp(args[0], args);
      }
        // fork failure
      else if (user-id != 0){
        printf("Exec failed, terminating.");
        return EXIT_SUCCESS;
      }
        // waiting for child to finish
      else {
          if (i != 0 && i % simul == 0){
            wait(NULL);
          }
      }
}
// waiting for children to finish
while(wait(NULL) > 0);
return EXIT_SUCCESS;
}
