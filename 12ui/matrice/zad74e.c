#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* upisi u fajl m3.txt matricu dimenzije n sa raznim dijagonalama
n=4

   * 
  ** 
 *** 
**** 

*/

int main() {
    FILE *f;
    f = fopen("z74e.txt", "w");

    int n; scanf("%d", &n); // korisnik odredjuje dimenziju

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++)  // prvi deo reda, razmaci
            fprintf(f, " ");

        for (int j = 0; j < i + 1; j++) { // drugi deo reda, tarabe
            fprintf(f, "*");
        }
        fprintf(f, "\n"); // prelazak u novi red
    }

       
    
    fclose(f);

    return 0; }