#include <stdio.h>

/* u bin3.bin upisi niz od 10 int elemenata */

int main() {
    FILE *f;
    f = fopen("binarni3.bin", "r");

    int a[10];
    fread(&a, sizeof(int), 10, f);
    
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    
    fclose(f);

    return 0; }