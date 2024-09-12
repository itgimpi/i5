#include <stdio.h>
#include <math.h>

// za svaki broj od 1 do n ispisi zbir svih brojeva od 1 do n
int main() {
    int n; scanf("%d", &n);
    int zbir = n * (n+1) /2;;

    for (int i = n; i > 0; i--) {
        
        printf("%d %d\n", i, zbir);
        zbir -= i;
    }
    return 0;
}