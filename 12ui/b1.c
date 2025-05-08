#include <stdio.h>

/* u binarni fajl binarni1.bin upisi samo jednu promenljivu */

int main() {
    FILE *f;
    f = fopen("binarni1.bin", "w+b");

    int x = 5;
    //fwrite(&x, 4, 1, f);
                          //broj objekata za upis
    fwrite(&x, sizeof(int), 1, f); // upis u fajl
    
    printf("Upisano je %ld Bajta", ftell(f));
    
    fclose(f);

    return 0; }