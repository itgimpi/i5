#include <stdio.h>

/* 
pr1
if (izraz1) // ako je izraz1 T...
    if (izraz2) // ako je izraz1 T && ako je izraz2 T...
        naredba1 // onda...
else // ako je izraz1 F... 
    naredba2

pr2
if (izraz1) { // isto...
    if (izraz2)
        naredba1;
    naredba2;
    ... } 
else
    naredba2

pr3
if (izraz1)  // ako je izraz1 T...
    naredba1
else if (izraz2) // ako je izraz1 F i ako je izraz2 T......
    naredba2
else if (izraz3) // ako je izraz1, izraz2 F i ako je izraz3 T......
    naredba3
else
    naredba4  // ako je izraz1, 2, 3 ......    
 */ 


int main() {  // <- {} su za blok (više) naredbi

    int a = 10;
    if (a > 0)
        printf("A je veci od nule\n");
    else if (a < 0)
        printf("A je manji od nule\n");
    else /* if (a == 0) */
        printf("A je nula\n");

    int b = 5, x;
    if (a > b)
        x = a;
    else
        x = b;
    }