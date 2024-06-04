#include <stdio.h>
#include <string.h>
#include <assert.h>

int compare3 (char *a, char *b, size_t s) {
  register char flag = 0;
  for (int i=0; i < s; i++) {
    flag |= !!(a[i] ^ b[i]);
  }
  return !flag;
}

char *A = "abcdefg";
char *B = "abcdefh";

void main(void) {
    assert(strlen(A) == strlen(B));
    int result = compare3(A, B, strlen(A));
    printf("strings are equal: %i\n", result);
}
