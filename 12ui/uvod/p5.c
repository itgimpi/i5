#include <stdio.h>

/* Input, Output */

int main() {
    int c; // zbog EOF

    while ( (c = getchar()) != EOF ) 
        putchar(c);
       

    return 0; }