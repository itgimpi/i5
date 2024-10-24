#include <stdio.h>

/* 
switch (izraz) { // 
    case konstantan_izraz1: naredbe1
    case konstantan_izraz2: naredbe2
    ...
    default: naredbe_n
} 
*/

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