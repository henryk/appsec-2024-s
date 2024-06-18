#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void gadget1() {
    asm("pop %eax; ret");
}

void gadget2() {
    asm("call %eax; ret");
}

void vulnerable_function() {
    char buffer[64];
    printf("Enter some text: ");
    gets(buffer);  // gets() is unsafe and should not be used
    printf("You entered: %s\n", buffer);
}

void secret_function() {
    printf("You have successfully exploited the program!\n");
}

int main() {
    vulnerable_function();
    return 0;
}
