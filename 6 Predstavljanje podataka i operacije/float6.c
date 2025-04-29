#include <stdio.h>

/* Double nepreciznosti */

int main() {

    double d = 0.1;
    printf("%lf\n", d);
    printf("%.3lf\n", d);
    printf("%.10lf\n", d);
    printf("%.15lf\n", d);
    printf("%.20lf\n", d);
    printf("%.30lf\n", d);

    return 0;  
    
    }