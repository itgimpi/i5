#include <stdio.h>
#include <ctype.h>
// napravi fajl od oko 1kB sa nulama
int main() {
    FILE *f;

    f = fopen("file1kB.txt", "w");
    if (f==NULL) { // ako ne postoji fajl...
        printf("greska!!!");
        return 1; }
    for (int i = 0; i < 1000; i++)
        putc('0', f);
    
    
    fclose(f);

    return 0; }