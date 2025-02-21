#include <stdio.h>
#include "stringlib.h"

void scanString(char str[], int size) {
    printf("Enter a string: ");
    fgets(str, size, stdin);
    
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

void printString(const char str[]) {
    printf("The string is: %s\n", str);
}