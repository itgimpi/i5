#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* celi redovi */

int main() {
    FILE *f;
    f = fopen("test10.txt", "w");

    srand(time(NULL));
    char str[] = "1234567890";

    for (int i = 0; i < 1000; i++) {
        fputs(str, f);
        putc('\n', f);
    }
        
    
    fclose(f);

    return 0; }