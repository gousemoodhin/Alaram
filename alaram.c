/*
  - Synchronous alarm program.
  - This is used as a reference for progressive examples of asynchronous alarm program.
  - Input <seconds> <message> (example ./app 2 wakeup)
*/
#include "errors.h"

int main () {
  int seconds;
  char line[256];
  char message[256];

  while (1) {
    printf ("Enter <seconds> <message> : ");
    if (fgets (line, sizeof(line), stdin) == NULL) exit(0);
    if (strlen (line) <= 1) continue;
    if ((sscanf (line, "%d %s", &seconds, message) < 2)) {
      fprintf (stderr, "Bad command\n");
    } else {
      sleep (seconds);
      printf ("(%d) %s\n", seconds, message);
   }
  }
}

