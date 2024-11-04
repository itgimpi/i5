#include <stdio.h>

/* 7.4 Petlje */

/*
Dead Loops - mrtve petlje
*/

int main() {

    int i = 0;


    while (1) // <- 1 je uvek tacno, petlje se izvrsava u nedogled
        i++;

    printf("%d\n", i);



    return 0; }