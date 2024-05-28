#include <stdio.h>
#include <stdlib.h>

void main(int argc, char **argv) {
  int i = 7;
  if (argc < 2) { exit(1); }
  int x;
  printf("%i %s %n\n", i, argv[1], &x);
  printf("%i\n", x);
}
