#include <stdio.h>
#include <string.h>
#include <assert.h>

int compare1 (char *a, char *b, size_t s) {
  int flag = 0;
  for (int i=0; i < s; i++) {
    if (a[i] != b[i]) {
      flag = 1;
    }
  }
  return !flag;
}

char *A = "abcdefg";
char *B = "abcdefh";

void main(void) {
    assert(strlen(A) == strlen(B));
    int result = compare1(A, B, strlen(A));
    printf("strings are equal: %i\n", result);
}
