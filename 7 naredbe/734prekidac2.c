#include <stdio.h>

/* 
switch menja if - else - if ...

switch (izraz) { // vrednost izraz-a
    // ako je konstantan_izraz1 -> naredbe1
    case konstantan_izraz1: naredbe1
    // ako je konstantan_izraz2 -> naredbe2
    case konstantan_izraz2: naredbe2
    ...
    default: naredbe_n // nista do sada
} 
*/

int main() {

    int n;
    scanf("%i",&n);
    switch (n % 3) {
        case 1:
        case 2:
            printf("Uneti broj nije deljiv sa 3"); 
            break;
        default: printf("Uneti broj je deljiv sa 3");
    }


    return 0;  
    
    }