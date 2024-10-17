#include <stdio.h>

/*          Подела јабука
https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka/podela_jabuka
*/


int main() {
    int jabuke;
    scanf("%d", &jabuke);

    //prvi dobija sve jabuke
    int b1 = jabuke;
    int b2 = 0;
    int b3 = 0;
    int b4 = 0;
    //prvi deli ostalima po 1/3
    b1 = 0;
    b2 = jabuke / 3;
    b3 = jabuke / 3;
    b4 = jabuke / 3;
    //drugi deli ostalima po 1/3
    b1 = b2 / 3; // imao je 0
    b3 += b2 / 3;
    b4 += b2 / 3;
    b2 = 0;
    //treci deli ostalima po 1/3
    b1 += b3 / 3; 
    b2 += b3 / 3;
    b4 += b3 / 3;
    b3 = 0;
    //cetvrti deli ostalima po 1/3
    b1 += b4 / 3; 
    b2 += b4 / 3;
    b3 += b4 / 3;
    b4 = 0;    
    //printf("%d %d %d %d", b1, b2, b3, b4); <- treba novi red
    printf("%d\n%d\n%d\n%d\n", b1, b2, b3, b4);
    return 0; }