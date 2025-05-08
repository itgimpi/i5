#include <stdio.h>
#include <ctype.h>
/* napravi kopiju fajla u out1.txt */

int main() {
    FILE *f1, *f2;
    // otvori fajl in1.txt za citanje i zovi ga f1

    f1 = fopen("in1.txt", "r"); // za citanje
    f2 = fopen("out1.txt", "w"); // za upis

    if (f1==NULL) { // ako ne postoji fajl in1.txt...
        printf("greska!!!");
        return 1; }

    int c;
    while( (c=getc(f1))!=EOF ) 
        putc(c, f2); // na stdout
    
    fclose(f1);
    fclose(f2);

    return 0; }