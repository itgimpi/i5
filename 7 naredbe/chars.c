#include <stdio.h>

/* char */


int main() {

    unsigned char c; 
    
    for(c = 0; c < 128; c++) { 
        //printf("%d ", c); // %d konverzija daje brojeve od 0 do 127
        //printf("%c\n", c);// %c daje znakove, za odredjene ASCII kodove
        printf("%d. %c\n", c, c);

    }

    return 0;  
    
    }