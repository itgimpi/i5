#include <stdio.h>
#include <ctype.h>
/* citanje iz fajla, znak po znak, ispis putchar */

int main() {
    FILE *f;
    // otvori fajl in1.txt za citanje i zovi ga f
    f = fopen("in1.txt", "r");
    if (f==NULL) { // ako ne postoji fajl...
        printf("greska!!!");
        return 1; }
    int c;
    while( (c=getc(f))!=EOF ) 
        putchar(c); // na stdout
    
    fclose(f);

    return 0; }