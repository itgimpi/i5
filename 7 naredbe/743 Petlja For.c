#include <stdio.h>

/*
Petlja for

for (izraz1; izraz2; izraz3) {
    naredbe }

for pomocu while-a:

izraz1;
while (izraz2) {
    naredba
    izraz3;
    }

*/

int main() {

    int i; // deklaracija, i postoji pre, u i posle petlje

    for ( i = 0; i < 100; i++)
        printf("%i ", i); // od 0 do 99

    int ii = 0;
    while (i < 100) {
        printf("%i ", ii); // od 0 do 99
        ii++;
        }


    printf("%d\n", i); // 100

    for ( int iii = 0; i < 100; iii++) // iii postoji samo u ovom for-u
        printf("%i ", iii); // od 0 do 99    

    return 0; }