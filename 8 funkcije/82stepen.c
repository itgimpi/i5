#include <stdio.h>

const unsigned max = 10;

float stepen(float x, unsigned n);

int main() {
    unsigned i;
    for(i = 0; i < max; i++)
    printf("%d %f %f\n", i, stepen(2.0f,i), stepen(3.0f,i));
    return 0;
}

float stepen(float x, unsigned n) {
    unsigned i;
    float s = 1.0f;
    for(i = 1; i<=n; i++)
    s *= x;
    return s;
}