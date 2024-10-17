#include <stdio.h>
/*                Nizovi - ispis elemenata niza unetih brojeva

*/

int main() {
    int a[1000]; // niz a ima 1000 elemenata
    int n; // dimenzija problema
    // br. elemenata koji treba da se ispisu
    scanf("%d", &n);
    // omoguci unos n elemenata...
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // unos je zavrsen...
    // sledi ispis svih elemenata
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;     
    }