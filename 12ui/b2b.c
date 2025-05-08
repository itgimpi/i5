#include <stdio.h>

/* Files */

int main() {
    FILE *f;
    f = fopen("binarni2.bin", "r+b");

    int x;
    fread(&x, sizeof(int), 1, f);
    printf("%d\n", x);
  
    fread(&x, sizeof(int), 1, f);
    printf("%d\n", x);

    fread(&x, sizeof(int), 1, f);  
    printf("%d\n", x);
    
   
    fclose(f);

    return 0; }