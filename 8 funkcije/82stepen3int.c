#include <stdio.h>

const unsigned max = 10;

int stepen(int osnova, int st) {
    
    int res = 1;
    for(int i = 1; i<=st; i++)
        res *= osnova;
    return res; }

int main() {
    
    for(int i = 0; i <= max; i++)
        printf("%2d %4d %5d\n", i, stepen(2,i), stepen(3,i));
    return 0; }

