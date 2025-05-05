#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* celi redovi */

int main() {
    FILE *f;
    f = fopen("test20.txt", "w");

    srand(time(NULL));

    for (int i = 0; i < 1000; i++) {
        int sluc = rand(); // broj od 0 do RAND_MAX=32767
        fprintf(f, "%d\n", sluc);
    }
        
    
    fclose(f);

    return 0; }