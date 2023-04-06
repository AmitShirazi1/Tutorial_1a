#include <stdio.h>
#include <string.h>
#include "international-hello-world.h"

#define HEBREW

int main() {
    print_hello_string();
    return 0;
}

void print_hello_string() {
#ifdef ENGLISH
    printf("Hello, World!\n");
#endif
#ifdef HEBREW
    printf("Shalom, Olam!\n");
#endif
}