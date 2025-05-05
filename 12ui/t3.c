#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Files */

int main() {
    FILE *f;
    f = fopen("test3.txt", "w");

    srand(time(NULL));
    
    for (int i = 0; i < 1000; i++) { 
        putc('0' + rand() % 10, f);
        putc('\n', f); // novi red
    }
    
    fclose(f);

    return 0; }