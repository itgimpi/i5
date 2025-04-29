#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* celi redovi */

int main() {
    FILE *f;
    f = fopen("test10.txt", "r");

    srand(time(NULL));
    char str[10];

    for (int i = 0; i < 1000; i++) {
        fgets(str, 10, f);
        printf("%s\n", str);
    }
        
    
    fclose(f);

    return 0; }