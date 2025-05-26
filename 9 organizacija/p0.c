#include <stdio.h>

/* 
gcc .\p0.c //                .\ je trenutni direktorijum
dobija se a.exe

gcc -c .\p0.c -> p0.o , objective file

gcc -o p0.exe .\p0.c -> p0.exe, exe file

gcc -Wall .\p0.c -> Warnings!!!

*/

int main() {
    char c = 5;
    int a = 10;
    long long l = 20;
    
    //printf("%i %i %i\n", c, a, l);
    //printf("%d %d %d\n", c, a, l);
    printf("%d %d %lld\n", c, a, l);

    return 0; }