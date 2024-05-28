#include <stdio.h>
#include <limits.h>

void main(void) {
  unsigned int a = UINT_MAX;
  a++;
  printf("%d\n", a);
}
