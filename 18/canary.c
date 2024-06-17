#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void function(char *str) {
   int canary = 0;
   char buffer[16];

   strcpy(buffer,str);

   if (canary != 0) {
     fprintf(stderr, "Overflow detected\n");
     exit(1);
   }
}

void main() {
  char large_string[256];
  int i;

  for(i = 0; i < 255; i++)
    large_string[i] = 'A';

  function(large_string);
}
