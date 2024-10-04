#include <stdio.h>

/* Закуцавање
https://arena.petlja.org/sr-Latn-RS/competition/os6-202324-kvalifikacije2n#tab_135684
 */

int main() {
    int h; scanf("%d", &h);
    int res;

    if ( h >= 264 ) // ne treba da skace
        res = 0;
    else
        res = 264 - h; // koliko da skoci

    printf ("%d\n", res);
   
    return 0;  
    
    }