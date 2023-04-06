#include <stdio.h>
#include <string.h>
#include "fancy-hello-world.h"

#define HELLO_LENGTH 20
#define NAME_LENGTH 10

int main() {
    char hello[] = "Hello world, hello ";
    char name[NAME_LENGTH];
    fgets(name, sizeof(name), stdin);

    char output[HELLO_LENGTH + NAME_LENGTH];
    strcpy(output, hello);
    hello_string(name, output);

    printf("%s", output);
    return 0;
}

void hello_string(char* name, char* output) {
    strcat(output, name);
}