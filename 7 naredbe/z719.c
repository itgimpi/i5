#include <stdio.h>
// Napisati program koji za zadati dan, mesec i godinu ispituje da li je uneti datum korektan
// uzeti u obzir i prestupne godine
// Koristiti switch naredbu

int main() {  // <- {} su za blok (više) naredbi

    int d, m, g; scanf("%d %d %d", &d, &m, &g); // input
    int dani;

    switch ( m ) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: dani = 31; break;

        case 4:
        case 6:
        case 9:
        case 11: dani = 30; break;

        case 2: dani = ( g % 4 == 0 && g % 100 != 0 || g % 400 == 0 ) ? 29 : 28; break;
        // if ( true ) true : false;

        default: printf("ne valja mesec\n"); // mesec nije od 1 do 12

    }

    if ( d < 1 || d > dani ) {
        printf("ne valja dan\n"); return 0;
    }

    if ( g < 0 ) {
        printf("ne valja godina\n"); return 0;
    }

    printf("OK\n");


    return 0; }