#include <stdio.h>

/*
Petlja for

*/

int main() {
    int i, j, n=10;
    for(i = 1; i < n; i++) {
        for(j = 1; j <= n; j++)
            printf("%2i*%2i=%2i ", i, j, i*j);
        printf("\n");
    }
    return 0;
}