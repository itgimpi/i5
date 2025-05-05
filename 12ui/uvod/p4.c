#include <stdio.h>

/* do kraja fajla, EOF, CTRL + Z */

int main() {
    int c; // zbog EOF
    // Znak . je i kraj unosa
    c = getchar();
    while ( c != EOF ) {
        putchar(c);
        c = getchar();
    }
        

    return 0; }