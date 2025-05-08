#include <stdio.h>

/* u bin3.bin upisi niz od 10 int elemenata */

int main() {
    FILE *f;
    f = fopen("binarni3.bin", "w");

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    fwrite(&a, sizeof(int), 10, f);
    
    printf("Upisano je %ldB", ftell(f));
    
    fclose(f);

    return 0; }