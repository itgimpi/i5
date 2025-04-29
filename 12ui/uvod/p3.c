#include <stdio.h>

/* Input, Output */

int main() {
    char c;
    // Znak . je i kraj unosa
    c = getchar();
    while ( c != '.' ) {
        putchar(c);
        c = getchar();
    }
        

    return 0; }