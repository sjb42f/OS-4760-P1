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
        // Print help menu
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
