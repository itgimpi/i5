#include <stdio.h>
/* duzina stringa */

int duzina(char s[]) {
    int i = 0;
    while (s[i] != 0) 
        i++;
    return i;
}

int main() {
    char s[100]; // string s sa najvise 100 znakova, 0, 1, ... 99
    scanf("%s", &s);
    printf("%d\n", duzina(s));
    
  
    return 0; }