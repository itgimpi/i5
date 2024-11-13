#include <stdio.h>

// loop in loop

int main() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            if (i + j > 2) break; // izlaz iz unutrasnje
            printf("%d %d\n", i, j); } }  
