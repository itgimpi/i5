#include <stdio.h>
#include <ctype.h>
/* delovi stringova  */

int main() {
    char c; // 1 znak, ascii kod, najmanji deo stringa
    scanf("%c", &c);
    printf("%c\n", c);
    // da li je taj znak cifra?
    if (isdigit(c)) printf("It is digit.\n");
    else printf("It is not a digit.\n");

   
    return 0; }