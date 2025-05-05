#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Files */

int main() {
    FILE *f;
    f = fopen("test1.txt", "w"); // otvori fajl za upis

    // srand(time(NULL));
    
    for (int i = 0; i < 1000; i++) // 1000 puta
        putc('0', f); // upisi u fajl ASCII kod za 0
    
    fclose(f);

    return 0; }