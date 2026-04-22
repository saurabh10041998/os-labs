#include <stdio.h>
#include <stdlib.h>   // TODO: move to common place
#include "echo.h"

CMD handle_echo() {
  puts("Hello, World");
  exit(0);
}
