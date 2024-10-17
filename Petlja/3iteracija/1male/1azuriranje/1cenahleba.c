#include <stdio.h>

/*          Цена хлеба
https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka/cena_hleba
*/


int main() {
    float cena;
    scanf("%f", &cena);
    /* 
    float cena2 = cena * 1.1;
    float cena3 = cena2 * .9;
    printf("%.2f", cena3); */
    printf("%.2f", cena * 1.1 * 0.9);
    
    return 0; }