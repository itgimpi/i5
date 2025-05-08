#include <stdio.h>
#include <ctype.h>
/* Files */
// napravi fajl od oko 1kB
int main() {
    FILE *f;

    f = fopen("file4kB.txt", "w");
    if (f==NULL) { // ako ne postoji fajl...
        printf("greska!!!");
        return 1; }
    for (int i = 0; i < 4000; i++)
        putc('0', f);
    
    
    fclose(f);

    return 0; }