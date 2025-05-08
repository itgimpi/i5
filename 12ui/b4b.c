#include <stdio.h>

/* iz binarni4.bin procitaj strukturu podataka */

struct dvabroja { // dvabroja je nova struktura
    int br1;
    int br2;
} ;

int main() {
    FILE *f;
    f = fopen("binarni4.bin", "r+b");

    struct dvabroja dva;

    fread(&dva, sizeof(struct dvabroja), 1, f);
    
    printf("%d %d\n", dva.br1, dva.br2);
    
    fclose(f);

    return 0; }