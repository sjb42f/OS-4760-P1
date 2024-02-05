// SERENA BRIZARD
// PROJECT 1 - SKELETON MULTIPLE PROCESSES
// UMSL CS 4760 - OPERATING SYSTEMS
// TERM - SPRING 2024

void helpmenu() // Input -h
  {
  printf("Options:\n");
  printf("Program will run using the following command structure:\n");
  printf("oss [-h] [-n proc] [-s simul] [-t iter]");
    
    printf("[-h] will bring you to this screen, the help menu.  Will show you how to run this program.");
    printf("[-n proc] will begin to launch user processes. 'proc' is the number of times you want to launch.");
    printf("[-s simul] will control how many children are allowed to run simultaneously. 'simul' is the number of children allowed at once.");
    printf("[-t iter] will decide the number of tests each user will need to go through to pass. 'iter' is the number of iterations the program will run.");
  printf("Examples of accepted input:\n");
  printf("oss -h\n");
  printf("oss -n 2 -s 6 -t 5 \n");
  printf("oss -n 5 -s 3 -t 7 \n");
  }


// oss -h -n proc -s simul -t iter
// ex. oss -n 5 -s 3 -t 7
// -h is help message
// -n proc is the number of children to launch
// -s simul is how many children can launch at the same time
// -t iter is the number that have passed to user process

const char optstr[] = "hr:c:d:";
char opt;

// getopt from OS_Tutorials.docx on Canvas
while ( ( opt = getopt ( argc, argv, optstr ) ) != -1 )
  {
    switch (opt)
    {
      case 'h':
        helpmenu();
        break;
      case 'n':
        // n proc
        break;
      case 's':
        // s simul
        break;
      case 't':
        // t iter
        break;
      default:
        printf ( "Invalid option %c\n", optopt );
        break;
    }
  }
