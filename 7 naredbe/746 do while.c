#include <stdio.h>

/*
do while

// 
// telo petlje mora da se izvrsi bar 1!

// kad je n = 0, izvrsi se samo 1

n je 12345
Out: 5 
n je 1234
Out: 5 4
n je 123 
Out: 5 4 3
n je 12
Out: 5 4 3 2
n je 1
Out: 5 4 3 2 1
n je 0
*/



int main() {
    unsigned n; // samo pozitivni
    printf("Unesi broj: "); scanf("%u", &n);
    do {
        printf("%u ", n % 10);
        n /= 10;
    } while (n > 0); // radi sve dok je n > 0
    return 0;
}