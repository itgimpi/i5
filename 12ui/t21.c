#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 1000 slucajnih brojeva od -32767 do 32767 */

int main() {
    FILE *f;
    f = fopen("test20.txt", "w");

    srand(time(NULL));

    for (int i = 0; i < 1000; i++) {
        int sluc = rand(); // broj od 0 do RAND_MAX=32767

        int znak = rand() % 2; // 0 ili 1, dve vrednosti, 50%
        if (znak) sluc = -sluc; // ako je 1, broj ce da bude negativan
        
        fprintf(f, "%d\n", sluc);
    }
        
    
    fclose(f);

    return 0; }