#include <stdio.h>
#include <string.h>

/* proveri da li su u stringu sve cifre */

int je_cifra(char c) {
    return c >= '0' && c <= '9'; }

int sve_cifre(char s[]) {
    int brcif = 0;
    int n = strlen(s);
    for (int i = 0; i < n; i++)
        if (je_cifra(s[i])) 
            brcif++;
    return brcif == n;

}

int main() {
    char s[100]; // string s sa najvise 100 znakova, 0, 1, ... 99
    scanf("%s", &s);
    if (sve_cifre(s)) printf("sve su cifre\n");
    else printf("nisu\n");
  
    return 0; }