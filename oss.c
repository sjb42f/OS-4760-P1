// SERENA BRIZARD
// PROJECT 1 - SKELETON MULTIPLE PROCESSES
// UMSL CS 4760 - OPERATING SYSTEMS
// TERM - SPRING 2024
// OSS.C Resources - getopt(3) from OS_Tutorials.docx

void helpmenu() // Input -h
  {
  printf("-------------------HELP MENU-------------------\n");
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

const char optstr[] = "hn:s:t:";
char opt;
// Default values for variables
proc = 0;
simul = 0;
iter = 0;

while ((opt = getopt(argc, argv, optstr)) != -1)
  {
    switch (opt)
    {
      case 'h':
        helpmenu();
        break;
      case 'n':
        // n proc
        proc = atoi(optarg);
        break;
      case 's':
        // s simul
        simul = atoi(optarg);
        break;
      case 't':
        // t iter
        iter = atoi(optarg);
        break;
      default:
        printf ("Invalid option %c\n", optopt);
        break;
    }
  }
