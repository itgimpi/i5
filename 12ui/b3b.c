#include <stdio.h>

/* iz binarni3.bin procitaj niz od 10 int elemenata */

int main() {
    FILE *f;
    f = fopen("binarni3.bin", "r+b");

    int a[10];
    fread(&a, sizeof(int), 10, f); // ucita ceo niz
    
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    
    fclose(f);

    return 0; }