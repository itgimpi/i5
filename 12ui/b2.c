#include <stdio.h>
/* u binarni fajl binarni2.bin upisi tri promenljive */

int main() {
    FILE *f;
    f = fopen("binarni2.bin", "w+b");

    int x = 5;
    fwrite(&x, sizeof(int), 1, f);

    x = 6;
    fwrite(&x, sizeof(int), 1, f);

    x = 7;
    fwrite(&x, sizeof(int), 1, f);  
      
    printf("Upisano je %ldB", ftell(f));
    
    fclose(f);

    return 0; }