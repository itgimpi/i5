#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* upisi u fajl m1.txt nula matricu dimenzije n */

int main() {
    FILE *f;
    f = fopen("m1.txt", "w");

    int n; scanf("%d", &n); // korisnik odredjuje dimenziju

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fprintf(f, "%d", 0);
        }
        fprintf(f, "\n");
    }

       
    
    fclose(f);

    return 0; }