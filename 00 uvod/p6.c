#include <stdio.h>
#include <math.h>

// za svaki broj od 1 do n ispisi zbir svih brojeva od 1 do n
int main() {
    int n; scanf("%d", &n);
    int zbir = 0;

    for (int i = 1; i <= n; i++) {
        zbir += i;
        printf("%d %d\n", i, zbir);
    }
    return 0;
}