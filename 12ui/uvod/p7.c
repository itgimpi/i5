#include <stdio.h>
#include <ctype.h>
/* Input, Output */

int main() {
    int c; // zbog EOF

    while ( (c = getchar()) != EOF ) 
        putchar(toupper(c));
       

    return 0; }