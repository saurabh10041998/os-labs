#include <stdio.h>
#include <string.h>
#include <stdlib.h>   // TODO: move to common place
#include "echo.h"

#define MAX_MSG_LEN  1000

CMD handle_echo(struct execcmd* ecmd) {
  char msg[MAX_MSG_LEN] = "";

  int ptr = 0;

  while (ecmd->argv[ptr] != 0) {
    if (ptr == 0) {
       ptr += 1;
       continue;
    }

    strcat(msg, ecmd->argv[ptr++]);
    strcat(msg, " ");
  }

  printf("%s\n", msg);
  exit(0);
}
