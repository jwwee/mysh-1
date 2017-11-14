#include "signal_handlers.h"
#include <signal.h>
#include <stdio.h>

void catch_sigint(int signalNo)
{
  signal(SIGINT, catch_sigint);
  printf("\nctrl+c ignored\n");
  fflush(stdout);
  // TODO: File this!
}

void catch_sigtstp(int signalNo)
{
  signal(SIGTSTP, catch_sigtstp);
  printf("\nctrl+z ignored\n");
  fflush(stdout);
  // TODO: File this!
}
