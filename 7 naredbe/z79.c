#include <stdio.h>

// Napisati program koji uˇcitava cele brojeve sve dok se ne unese 0 i izraˇcunava duˇzinu najduˇze
//serije uzastopnih jednakih brojeva.

// 1 2 3 1 1 1 6546 567 4576 2 2 4 4 0 -> 3

int main() {
    int trd = 0; // trenutna duzina uzastopnih brojeva
    int najd = 0; // najveca ...
    int preth, tr; // zadnja 2 uneta broja
    scanf("%d", &preth);
    if ( preth != 0 ) { // ako prvi broj nije 0
        // unos brojeva do 0
        trd = najd = 1; // posle prvog broja koji nije 0
        while (1) { // vrti unedogled...
            scanf("%d", &tr);
            if ( tr == 0 ) // ako je broj 0...
                break; // izlazi iz while
            // nije 0...
            if ( tr == preth ) // isti?
                trd++;
            //nisu...
            else
                trd = 1; // proba se sa novom serijom...
            
            if ( trd > najd )
                najd = trd;
            //najd = max(trd, najd) C++

            preth = tr; // novi preth.
        }


    }
    printf("%d", najd);
}