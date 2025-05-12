#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* upisi u fajl m3.txt matricu dimenzije n sa raznim dijagonalama
n=4

**** 
**** 
**** 
**** 

*/

int main() {
    FILE *f;
    f = fopen("z74a.txt", "w");

    int n; scanf("%d", &n); // korisnik odredjuje dimenziju

    for (int i = 0; i < n; i++) { // po redovima
        for (int j = 0; j < n; j++) { // po kolonama
            fprintf(f, "#");
        }
        fprintf(f, "\n"); // prelazak u novi red
    }

       
    
    fclose(f);

    return 0; }