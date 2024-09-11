#include<stdio.h>
#include<math.h>
// Program koji izracunava rastojanje tacke i koord. pocetka
int main(){
    printf("unesi koordinate tacke A ");

    //int x, y; NE VALJA jer KORDINATE NISU CELI BROJEVI!!!
    float x, y; // x i y su decimalni brojevi

    scanf("%f %f", &x, &y);
    printf("Rastojanje na kvadrat je %f\n", x*x+y*y);
    printf("Rastojanje je %f\n", sqrt(x*x+y*y));
    return 0;
}

