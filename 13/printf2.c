#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int argc, char **argv) {
  int i = 7;
  if (argc < 2) { exit(1); }
  char *buf = strdup(argv[1]);
  printf(buf);
}
