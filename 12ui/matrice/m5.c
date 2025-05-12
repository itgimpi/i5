#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* upisi u fajl m5.txt 
n=4
1000
0100
0010
0001
*/

int main() {
    FILE *f;
    f = fopen("m5.txt", "w");

    int n; scanf("%d", &n); // korisnik odredjuje dimenziju

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fprintf(f, "%3d", i);
        }
        fprintf(f, "\n"); // prelazak u novi red
    }

       
    
    fclose(f);

    return 0; }