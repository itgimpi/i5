#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Random numbers */

int main() {
    srand(time(NULL));
    int x = rand();
    printf("%d\n", x);
    x = rand();
    printf("%d\n", x);    
    return 0; }