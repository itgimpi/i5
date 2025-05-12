#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* upisi u fajl m3.txt matricu dimenzije n sa raznim dijagonalama
n=5
*****
**** 
*** 
** 
* 

*/

int main() {
    FILE *f;
    f = fopen("z74b.txt", "w");

    int n; scanf("%d", &n); // korisnik odredjuje dimenziju

    for (int r = 0; r < n; r++) { // po redovima, n redova
        for (int k = 0; k < n - r; k++) { // po kolonama, za svaki red smanji br. ispisa za 1
            fprintf(f, "#");
        }
        fprintf(f, "\n"); // prelazak u novi red
    }

       
    
    fclose(f);

    return 0; }