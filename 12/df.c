#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

#define BUFSIZE 10

void main(void) {
  void *ptr1 = malloc(BUFSIZE);
  void *ptr2 = malloc(BUFSIZE);
  void *ptr3 = malloc(BUFSIZE);
  free(ptr1);
  free(ptr2);
  free(ptr1);
  void *ptrB_1 = malloc(BUFSIZE);
  void *ptrB_2 = malloc(BUFSIZE);
  void *ptrB_3 = malloc(BUFSIZE);
  printf("ptrB_1: %p\n", ptrB_1);
  printf("ptrB_2: %p\n", ptrB_2);
  printf("ptrB_3: %p\n", ptrB_3);
}
