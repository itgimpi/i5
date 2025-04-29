#include <stdio.h>
typedef char znak;
typedef int ceo;
/* isalpha  */

ceo je_slovo(char c) {
    return c >= 'a' && c <= 'z' ||
           c >= 'A' && c <= 'Z';
}

ceo main() {
    znak c; // 1 znak, ascii kod, najmanji deo stringa
    scanf("%c", &c);
    printf("%c\n", c);
    // da li je taj znak cifra?
    if (je_slovo(c)) printf("Slovo.\n");
    else printf("Nije slovo.\n");

  
    return 0; }