#include <stdio.h>
typedef char znak;
typedef int ceo;
/* isdigit  */

ceo je_cifra(char c) {
    if ( c >= '0' && c <= '9' )
        return 1;
    else 
        return 0;

}

int main() {
    znak c; // 1 znak, ascii kod, najmanji deo stringa
    scanf("%c", &c);
    printf("%c\n", c);
    // da li je taj znak cifra?
    if (je_cifra(c)) printf("It is digit.\n");
    else printf("It is not a digit.\n");

   
    return 0; }