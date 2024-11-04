#include <stdio.h>

/*
Petlja for

*/

int main() {
    int i, j, n=3;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++)
            printf("%i * %i = %i\t", i, j, i*j);
        printf("\n");
    }
    return 0;
}