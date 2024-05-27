#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

void main(void) {
  void *ptr1 = malloc(100);
  void *ptr2 = malloc(100);
  free(ptr1);
  void *ptr3 = malloc(100);
  printf("ptr1: %p\n", ptr1);
  printf("ptr2: %p\n", ptr2);
  printf("ptr3: %p\n", ptr3);
}
