#include <stdio.h>

/*
Petlja for

*/

int main() {

    int i, j;

    for (i = 0, j = 10; i < j; i++, j--)
        printf("i=%d, j=%d\t", i, j);

    printf("i=%d, j=%d\t", i, j); // 5 i 5

    return 0; }