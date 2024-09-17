#include <stdio.h>
#include <math.h>

/* Napisati program koji za uneti poluprecnik 𝑟 izracunava obim i povrsinu kruga 
(za broj 𝜋 koristiti konstantu M_PI iz zaglavlja math.h). */
int main() {
    float r; scanf("%f", &r);
    float o, p; // obim i povrsina

    //o = 2 * M_PI * r;
    //float pi = 3.14159265359;
    float pi2 = acos(-1);

    o = 2 * pi2 * r;
    p = pi2 * r * r;

    printf ("r = %f\n", r);
    printf ("O = %f\n", o);
    printf ("P = %f\n", p);
    return 0;
}