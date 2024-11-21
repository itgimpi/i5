#include <stdio.h>
#include <limits.h>
#include <math.h>
// Zadatak 7.8. Napisati program koji uˇcitava cele brojeve sve dok se ne unese 0, a onda ispisuje
/*
1. broj unetih brojeva;
2. zbir unetih brojeva;
3. proizvod unetih brojeva;
4. minimum unetih brojeva;
5. maksimum unetih brojeva;
6. aritmetiˇcku sredinu unetih brojeva ( 𝑥1 + ... + 𝑥𝑛 / 𝑛 );
7. geometrijsku sredinu unetih brojeva ( 𝑛 √ 𝑥1 · . . . · 𝑥𝑛);
8. harmonijsku sredinu unetih brojeva ( 𝑛 / (1/𝑥1 + ... + 1/𝑥𝑛));
*/


int main() {

    int zbir = 0, proizvod = 1, broj = 0;
    int minimum = INT_MAX;
    int maksimum = INT_MIN;
    double zbirRecVr = 0.0;
    
    while (1) {

        int a; scanf("%d", &a);

        if ( a == 0 ) // ako je uneti broj 0...
            break; // prekini sa unosom i idi na ispis

        broj++;
        zbir += a;
        proizvod *= a;
        zbirRecVr += (double) 1.0 / a;

        if ( a < minimum ) // ako je neki el. niza manji od do sada najmanjeg...
            minimum = a; // novi najmanji je taj el.
        if ( a > maksimum ) // ako je neki el. niza manji od do sada najmanjeg...
            maksimum = a; // novi najmanji je taj el.
    }

    // output
    printf("1. broj unetih brojeva: %d\n", broj);
    printf("2. zbir unetih brojeva: %d\n", zbir);
    printf("3. proizvod unetih brojeva: %d\n", proizvod);
    printf("4. minimum unetih brojeva: %d\n", minimum);
    printf("5. maksimum unetih brojeva: %d\n", maksimum);
    printf("6. aritmeticka sredina brojeva: %.2f\n", (double) zbir / broj);
    printf("7. geometrijska sredina brojeva: %f\n", pow(proizvod, (double)1.0/broj));
    printf("8. harmonijska sredinaa brojeva: %f\n", broj / zbirRecVr);
    
}