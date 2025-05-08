#include <stdio.h>

/* Files */

int main() {
    FILE *f;
    f = fopen("binarni1.bin", "r");

    int x;
    fread(&x, sizeof(int), 1, f);
    printf("%d", x);
    
    fclose(f);

    return 0; }