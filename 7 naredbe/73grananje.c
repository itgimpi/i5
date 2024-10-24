#include <stdio.h>

/* 

најпростији иф:

    if (izraz)         ako je izraz tacan
        naredba       onda izvrsi naredbu
    // ako NIJE tacan, nista se ne izvrsava

malo komplikovaniji

    if (izraz)         ako je izraz tacan
        naredba1       onda izvrsi naredbu 1
    else               inace
        naredba2 */  //  izvrsi naredbu 2

int main() {  // <- {} su za blok (više) naredbi
    int a;
    if (5 > 7) // nije
        a = 1;
    else       // jeste
        a = 2;

    printf("%d\n", a);
     

    if (7) // sve sto nije 0 je T
        a = 1;
    else
        a = 2;
    printf("%d\n", a);

    if (0)
        a = 1;  // 0 je F
    else
        a = 2;
    printf("%d\n", a); 

    a = 3;
    if (a = 0)
        printf("a je nula\n");
    else
        printf("a nije nula\n");

    return 0;    
    }