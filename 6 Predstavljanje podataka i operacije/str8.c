#include <stdio.h>
#include <string.h>

/* broj cifara u stringu */

int je_cifra(char c) {
    return c >= '0' && c <= '9'; }

int bar_jedna_cifra(char s[]) {
    int brcif = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        if (je_cifra(s[i])) 
            brcif++;
    return brcif;

}

int main() {
    char s[100]; // string s sa najvise 100 znakova, 0, 1, ... 99
    scanf("%s", &s);
    printf("ima %d\n", bar_jedna_cifra(s));
  
    return 0; }