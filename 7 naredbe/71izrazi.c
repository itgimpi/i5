#include <stdio.h>

/* Naredba izraza */

void f() {
    printf("Pozdrav iz void-a\n");
}
int f2(int n) {
    return n+1; }


int main() {
    /*
    3 + 4*5;
    n = 3;
    c++;
    
    */
    f();
    printf("%d\n", f2(10));

    return 0;  
    
    }