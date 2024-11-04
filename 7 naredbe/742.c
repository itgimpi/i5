#include <stdio.h>

/* 7.4 Petlje */

/*
Dead Loops - mrtve petlje
*/

int main() {

    int i = 0;


    while (2 > 1) // <- 2>1 je uvek tacno, petlje se izvrsava u nedogled
        i++;

    printf("%d\n", i);

    for (;;); // <- izbegavaj

    return 0; }