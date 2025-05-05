#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Files */

int main() {
    FILE *f;
    f = fopen("test2.txt", "w");

    srand(time(NULL));
    
    for (int i = 0; i < 1000; i++) 
        putc('0' + rand() % 10, f); // ascii kod cifre od 0 do 9
    
    fclose(f);

    return 0; }