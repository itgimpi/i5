#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Files */

int main() {
    FILE *f;
    f = fopen("test1.txt", "r"); // otvori fajl za citanje...

    //srand(time(NULL));
    
    for (int i = 0; i < 1000; i++)  { // 1000 puta
        int c = getc(f); // uzmi 1 znak iz fajla
        putchar(c); // i posalji ga na standardni izlaz
    }
        
    
    fclose(f);

    return 0; }