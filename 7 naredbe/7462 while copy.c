#include <stdio.h>

// Obican while
// telo petlje ne mora da se izvrsi!

// kad je n = 0, nista se ne izvrsava!

int main() {
    unsigned n; // samo pozitivni
    printf("Unesi broj: "); scanf("%u", &n);

    while (n > 0) {  // radi sve dok je n > 0
        printf("%u ", n % 10);
        n /= 10;
    }
    return 0;
}