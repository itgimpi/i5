#include <stdio.h>
/*  

˜, bitovska negacija;
&, bitovska konjunkcija;
|, bitovska disjunkcija;
^, bitovska eksluzivna disjunkcija;
<<, pomeranje (ˇsiftovanje) bitova ulevo;
>>, pomeranje (ˇsiftovanje) bitova udesno.

 */

int main() {
    unsigned char c1 = 10;
    unsigned char c2 = 13;
    printf("10 i 13 je %d\n", c1 & c2);
    // 1010
    // 1101
    // &
    // 1000 -> 8

    printf("10 ili 13 je %d\n", c1 | c2);
    // 1010
    // 1101
    // |
    // 1111 -> 15

    printf("10 xili 13 je %d\n", c1 ^ c2);
    // 1010
    // 1101
    // |
    // 0111 -> 7

    unsigned char c3 = 15;
    printf("negacija od 15 je %d\n", ~c3);

    unsigned char c4 = ~15;
    printf("negacija od 15 je %d\n", c4);

    unsigned int br = 25;
    printf("%d\n", br);
    printf("%d\n", br >> 1); // 2x manji
    printf("%d\n", br >> 2); // 4x manji
    printf("%d\n", br >> 3); // 8x manji
    printf("%d\n", br >> 4); // 16x manji

    unsigned int br2 = 3;
    printf("%d\n", br2);
    printf("%d\n", br2 << 1); // 2x veci
    printf("%d\n", br2 << 2); // 4x veci
    printf("%d\n", br2 << 3); // 8x veci
    printf("%d\n", br2 << 4); // 16x veci

    return 0;  
    
    }