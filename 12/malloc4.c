#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

void main(void) {
  void *ptr1 = malloc(100);
  void *ptr2 = malloc(100);
  free(ptr1);
  printf("done\n");
}
