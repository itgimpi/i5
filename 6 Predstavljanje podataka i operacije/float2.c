#include <stdio.h>

/* Float */

int main() {
    //printf("%d", 1/0); ZABRANJENO JE CELOBROJNO DELJENJE NULOM!

    float besk = 1.0 / 0.0; // inf
    printf("%f\n", besk);
    float besk2 = besk + 1.0;
    printf("%f\n", besk2);
    float besk3 = 1.0 / besk;
    printf("%f\n", besk3);
    float besk4 = -1.0 / 0.0; // -inf
    printf("%f\n", besk4);
    float besk5 = 0.0 / 0.0; // nan, NaN, not available number
    printf("%f\n", besk5);
    printf("%f\n", sqrt(4.0));
    printf("%f\n", sqrt(-4.0));


    return 0;  
    
    }