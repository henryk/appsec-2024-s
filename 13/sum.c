#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int sum(int a, int b)
{
  int c;
  assert(a >= 0);
  assert(b >= 0);
  c = a + b; /* both a and b are non-negative */
  if (c < 0) /* overflow? */
    abort();
  return c;
}

void main(int argc, char **argv) {
  if(argc < 3) { exit(1); }
  const int a = atoi(argv[1]);
  const int b = atoi(argv[2]);
  printf("%d\n", sum(a, b));
}
