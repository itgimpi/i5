#include <stdio.h>

/* u binarni4.bin upisi strukturu podataka */

struct dvabroja { // dvabroja je nova struktura
    int br1;
    int br2;
} ;

int main() {
    FILE *f;
    f = fopen("binarni4.bin", "w+b");

    struct dvabroja dv;
    dv.br1 = 1;
    dv.br2 = 10;

    fwrite(&dv, sizeof(struct dvabroja), 1, f);
    
    printf("Upisano je %ldB", ftell(f));
    
    fclose(f);

    return 0; }