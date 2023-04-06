#include <stdio.h>
#include <string.h>
#include "international-hello-world.h"
//Enter language here:
// #define HEBREW  - defined in the Makefile instead

int main() {
    print_hello_string();
    return 0;
}

void print_hello_string() {
    #ifdef ENGLISH
    printf("Hello world!\n")
    #endif

    #ifdef HEBREW
    printf("Shalom olam!\n");
    #endif

    #ifdef SPANISH
    printf("Hola mundo!\n")
    #endif
}