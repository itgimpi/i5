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
    // dani u nedelji su 1, 2, ..., 7
    int dan; 
    scanf("%i",&dan);
    switch (dan) {
        case 1: printf("pon..."); break;
        case 2: printf("uto..."); break;
        case 3: printf("sre..."); break;
        case 4: printf("cet..."); break; 
        case 5: printf("pet..."); break;
        case 6: printf("sub..."); break;
        case 7: printf("ned..."); break;
        default: printf("ne valja...");

    }


    return 0;  
    
    }