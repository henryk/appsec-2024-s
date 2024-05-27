#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

void main(void) {
  void *ptr1 = malloc(100);
  void *ptr2 = malloc(100);
  printf("ptr1: %p\n", ptr1);
  printf("ptr2: %p\n", ptr2);
  for(int i=0; i<150; i++) {
    ((char*)ptr1)[i] = 0x41;
  }
  free(ptr2);
}
