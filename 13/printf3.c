#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void hello()
{
  printf("Code execution redirected !\n");
  _exit(1);
}

void vuln() {
  char buffer[512];
  fgets(buffer, sizeof(buffer), stdin);
  printf(buffer);
  exit(1); 
}

void main(int argc, char **argv) {
  vuln();
}
