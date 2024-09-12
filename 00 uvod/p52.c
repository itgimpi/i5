#include <stdio.h>
#include <math.h>
#define N 100

int main() {
    int i;
    for (i = 1; i <= N; i++)
        printf("%3d %5d %7.3f\n", i, i*i, sqrt(i));
    return 0;
}