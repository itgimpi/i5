#include <stdio.h>

/* Input, Output */

int main() {
    int c; // zbog EOF
    // Znak . je i kraj unosa
    c = getchar();
    while ( c != EOF ) {
        putchar(c);
        c = getchar();
    }
        

    return 0; }