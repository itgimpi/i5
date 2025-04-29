#include <stdio.h>
typedef char znak;
typedef int ceo;
/* isupper  */

ceo je_malo_slovo(char c) {
    return c >= 'a' && c <= 'z';
}

ceo main() {
    znak c; // 1 znak, ascii kod, najmanji deo stringa
    scanf("%c", &c);
    printf("%c\n", c);
    // da li je taj znak cifra?
    if (je_malo_slovo(c)) printf("Malo.\n");
    else printf("Nije malo.\n");

  
    return 0; }