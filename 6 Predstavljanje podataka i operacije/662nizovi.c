#include <stdio.h>
/*                Nizovi - ispis zbira

*/

int main() {
    int a[1000]; // niz a ima 1000 elemenata
    int n; // dimenzija problema

    scanf("%d", &n);
    for (int i = 0; i < n; i++) // unos
        scanf("%d", &a[i]);

    int s = 0;
    for (int i = 0; i < n; i++) // racunanje
        s += a[i];

    printf("%d", s);
    return 0;     
    }