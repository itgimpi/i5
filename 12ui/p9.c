#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Random numbers */

int main() {
    FILE *f = fopen("slbr.txt", "w");
    srand(time(NULL));
    

    for (int i = 0; i < 1000; i++) {
        int x = rand() % 10;
        putc('0'+x, f);

    }

    return 0; }