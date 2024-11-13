#include <stdio.h>

/* Funkcije */
/* Novi C*/

int kvadrat(int n) { // f-ja se deklarise i opise pre main-a
    return n*n; }

int main() {
    int br; scanf("%d", &br);
    printf("Kvadrat broja %i je %i\n", br, kvadrat(br));
    return 0;
}

