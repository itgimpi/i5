#include <stdio.h>
#include <math.h>
/* Napisati program koji za unete koordinate temena trougla 
izraˇcunava njegov obim i povrˇsinu. */

float rastojanje(float x1, float y1, float x2, float y2) {
    return sqrt( (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) ); }

int main() {
    float x1, x2, x3, y1, y2, y3, a, b, c, o, p, s;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    scanf("%f %f", &x3, &y3);

    a = rastojanje(x1, y1, x2, y2);
    b = rastojanje(x1, y1, x3, y3);
    c = rastojanje(x3, y3, x2, y2);

    o = a + b + c;
    s = o / 2.0;
    p = sqrt( s * (s-a) * (s-b) * (s-c));

    printf("O = %f, P = %f\n", o, p);

    return 0;
}