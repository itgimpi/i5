#include <stdio.h>

/* Funkcije */
/* Novi C*/

int kvadrat(int n) { // f-ja se deklarise i opise pre main-a
    return n*n; }

int main() {
    printf("Kvadrat broja %i je %i\n", 5, kvadrat(5));
    printf("Kvadrat broja %i je %i\n", 9, kvadrat(9));
    return 0;
}

