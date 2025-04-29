#include <stdio.h>
#include <ctype.h>
/* Files */
// napravi fajl od 1kB
int main() {
    FILE *f;
    // otvori fajl in1.txt za citanje i zovi ga f1

    f = fopen("file1kB.txt", "w");
    if (f==NULL) { // ako ne postoji fajl...
        printf("greska!!!");
        return 1; }
    for (int i = 0; i < 1000; i++)
        putc('0', f);
    
    
    fclose(f);

    return 0; }