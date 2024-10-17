#include <stdio.h>
/*                Nizovi - ispis najveceg, najmanjeg      */

int main() {
    int a[1000]; 
    int n; scanf("%d", &n);
    for (int i = 0; i < n; i++) // unos
        scanf("%d", &a[i]);

    int najveci = a[0];
    for (int i = 1; i < n; i++) 
        if ( a[i] > najveci )
            najveci = a[i];

    printf("%d", najveci);
    return 0;     
    }