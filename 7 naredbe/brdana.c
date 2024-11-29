#include <stdio.h>
// Број дана у месецу

// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka/broj_dana_u_mesecu

int main() {  // <- {} su za blok (više) naredbi

    int m, g; scanf("%d %d", &m, &g); // input
    int res;

    switch ( m ) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: res = 31; break;

        case 4:
        case 6:
        case 9:
        case 11: res = 30; break;

        case 2: res = ( g % 4 == 0 && g % 100 != 0 || g % 400 == 0 ) ? 29 : 28; break;
        // if ( true ) true : false;

        

    }



    printf("%d\n", res);


    return 0; }