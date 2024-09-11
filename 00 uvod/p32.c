#include<stdio.h>
#include<math.h>
/* Program koji izracunava rastojanje izmedju 2 tacke */
int main(){
    printf("unesi koordinate tacke A ");
    float x1, y1; // x1 i y1 su decimalni brojevi
    scanf("%f %f", &x1, &y1);

    printf("unesi koordinate tacke B ");
    float x2, y2; // x2 i y2 su decimalni brojevi
    scanf("%f %f", &x2, &y2);

    //printf("Rastojanje je %f\n", sqrt( (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) ));
    printf("Rastojanje je %f\n", sqrt( (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1) ));
    return 0;
}

