#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>

#include "ls.h"


CMD
handle_ls() {
  struct dirent* entry;

  DIR *dp = opendir(".");

  if (dp == NULL) {
    perror("ls: Cannot open current directory");
    exit(-1);
  }

  while((entry = readdir(dp)) != NULL) {
    if (entry->d_name == ".") {
      continue;
    }
    printf("%s\n", entry->d_name);
  }

  closedir(dp);
  exit(0);
}
