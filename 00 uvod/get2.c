#include <stdio.h>
#include <ctype.h>
/* char 1 */
int main(){
    char c;
    c = getchar();
      

    while ( c != '.' ) {
        putchar(toupper(c));
        c = getchar();
        //putchar(c); 
    }  
    putchar('.');   
    

    return 0;
}

