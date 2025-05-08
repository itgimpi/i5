#include <stdio.h>

/* Files */

int main() {
    FILE *f;
    f = fopen("binarni1.bin", "r+b");

    int x;
    fread(&x, sizeof(int), 1, f); // citanje iz fajla
    printf("%d", x);
    
    fclose(f);

    return 0; }