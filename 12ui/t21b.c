#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 1000 slucajnih brojeva od -32767 do 32767 */

int main() {
    FILE *f;
    f = fopen("test20.txt", "r");

    for (int i = 0; i < 1000; i++) {
        int x;
        
        fscanf(f, "%d\n", &x);
        printf("%d\n", x);
    }
        
    
    fclose(f);

    return 0; }