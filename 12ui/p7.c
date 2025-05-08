#include <stdio.h>
#include <ctype.h>
/* Files */
// napravi fajl od oko 1GB
int main() {
    FILE *f;

    f = fopen("file1GB.txt", "w");
    if (f==NULL) { // ako ne postoji fajl...
        printf("greska!!!");
        return 1; }
    for (int i = 0; i < 1000000000; i++)
        putc('0', f);
    
    
    fclose(f);

    return 0; }