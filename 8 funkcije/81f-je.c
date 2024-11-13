#include <stdio.h>

/* Funkcije */
/* Stari C nacin 1 */

int kvadrat(int n); // prvo se deklarise f-ja

int main() {
    printf("Kvadrat broja %i je %i\n", 5, kvadrat(5));
    //      Kvadrat broja 5 je 25
    printf("Kvadrat broja %i je %i\n", 9, kvadrat(9));
    return 0;
}

int kvadrat(int n) {
    return n*n;
}