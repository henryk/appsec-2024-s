#include <stdio.h>

int c = 0;
#define COUNT 5

void fun(void) {
    for (int i=0; i<1000000; i++) {
        c++;
    }
}

void main(void) {
    for (int i=0; i<COUNT; i++) {
        fun();
    }
    printf("%i\n", c);
}
