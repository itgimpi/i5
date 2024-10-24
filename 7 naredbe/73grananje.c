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
    if (5 > 7) // nije 100%
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

    a = 3; // greskom je otkucano a = 0, umesto a==0
    if (a = 0) // ovo je dodela, dodeljuje se 0, ceo izraz je 0, F
        printf("a je nula\n");// ispis je T (a je 0)
    else
        printf("a nije nula\n"); // 
    // problem je sto se ocekuje da je a 3, a ne 0
    return 0;    
    }