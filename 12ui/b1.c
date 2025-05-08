#include <stdio.h>

/* u binarni fajl binarni1.bin upisi samo jednu promenljivu */

int main() {
    FILE *f;
    f = fopen("binarni1.bin", "w");

    int x = 5;
    fwrite(&x, sizeof(int), 1, f);
    
    printf("Upisano je %ld Bajta", ftell(f));
    
    fclose(f);

    return 0; }