#include <stdio.h>

/* Files */

int main() {
    FILE *f;
    f = fopen("binarni2.bin", "r");

    int x;
    fread(&x, sizeof(int), 1, f);
    printf("%d\n", x);
  
    fread(&x, sizeof(int), 1, f);
    printf("%d\n", x);

    fread(&x, sizeof(int), 1, f);  
    printf("%d\n", x);
    
    printf("Upisano je %ld Bajta", ftell(f));
    
    fclose(f);

    return 0; }