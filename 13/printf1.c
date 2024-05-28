#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv) {
  int i = 7;
  if (argc < 2) { exit(1); }
  printf("%i %s\n", i, argv[1]);
}
