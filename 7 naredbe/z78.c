#include <stdio.h>
#include <limits.h>
#include <math.h>
// Zadatak 7.8. Napisati program koji uˇcitava cele brojeve..., a onda ispisuje:
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
    int a[1000];

    // input, n numbers -> array
    int n; scanf("%d", &n);



    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int zbir = 0, proizvod = 1;
    int minimum = INT_MAX;
    int maksimum = INT_MIN;
    double zbirRecVr = 0.0;
    
    for (int i = 0; i < n; i++) { // za svaki element niza...
        zbir += a[i];
        proizvod *= a[i];
        zbirRecVr += (double) 1.0 / a[i];
        if ( a[i] < minimum ) // ako je neki el. niza manji od do sada najmanjeg...
            minimum = a[i]; // novi najmanji je taj el.
        if ( a[i] > maksimum ) // ako je neki el. niza manji od do sada najmanjeg...
            maksimum = a[i]; // novi najmanji je taj el.
        

    }

    // output
    printf("1. broj unetih brojeva: %d\n", n);
    printf("2. zbir unetih brojeva: %d\n", zbir);
    printf("3. proizvod unetih brojeva: %d\n", proizvod);
    printf("4. minimum unetih brojeva: %d\n", minimum);
    printf("5. maksimum unetih brojeva: %d\n", maksimum);
    printf("6. aritmeticka sredina brojeva: %.2f\n", (double) zbir / n);
    printf("7. geometrijska sredina brojeva: %f\n", pow(proizvod, (double)1.0/n));
    printf("8. harmonijska sredinaa brojeva: %f\n", n / zbirRecVr);
    
}