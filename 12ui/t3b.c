#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Files */

int main() {
    FILE *f;
    f = fopen("test3.txt", "r");

    //srand(time(NULL));
    
    for (int i = 0; i < 1000; i++)  {
        int c = getc(f);
        putchar(c);
        
        c = getc(f);
        putchar(c);
    }
        
    
    fclose(f);

    return 0; }