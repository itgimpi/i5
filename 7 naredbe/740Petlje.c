#include <stdio.h>

/* 7.4 Petlje */

/*
Petlje (ciklusi ili repetitivne naredbe) uzrokuju da se odredena naredba (ili grupa naredbi) 
izvrˇsava viˇse puta (sve dok je neki logiˇcki uslov ispunjen).

while(izraz) <- Sve dok je izraz tacan,
    naredba  <- Izvrsavaj naredbu

*/

// Petlja while

int main() {

    int i = 0;

    int ii = 0;
    while (ii < 10)
        ii++;
    printf("%d\n", ii);

    while ( i < 10 ) { // zagrade, jer je vise od 1 naredbe
        printf("%d ", i);
        i++; }

    printf("\n%d ", i); // posle petlje

    return 0; }