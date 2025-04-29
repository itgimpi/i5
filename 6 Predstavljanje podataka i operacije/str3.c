#include <stdio.h>
typedef char znak;
typedef int ceo;
/* isupper  */

ceo je_veliko_slovo(char c) {
    return c >= 'A' && c <= 'Z';
}

ceo main() {
    znak c; // 1 znak, ascii kod, najmanji deo stringa
    scanf("%c", &c);
    printf("%c\n", c);
    // da li je taj znak cifra?
    if (je_veliko_slovo(c)) printf("Veliko.\n");
    else printf("Nije veliko.\n");

   
    return 0; }