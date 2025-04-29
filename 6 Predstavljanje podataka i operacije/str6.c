#include <stdio.h>
typedef char znak;
typedef int ceo;
/* isalpha  */

ceo u_veliko(char c) {
    // samo se malo slovo pretvara u veliko
    if ( c >= 'a' && c <= 'z' )
        return c - 'a' + 'A';
    return c;
}

ceo main() {
    znak c; // 1 znak, ascii kod, najmanji deo stringa
    scanf("%c", &c);
    printf("%c\n", c);
    // pretvori malo u veliko

    printf("%c\n", u_veliko(c));

  
    return 0; }