#include <stdio.h>
/*                Operator uslova

izraz1 ? izraz2 : izraz3

 */

int main() {
    int a, b, m, m2;
    scanf("%d%d", &a, &b);
    m = (a > b) ? a : b; // nije manji
    printf("%d\n", m);

    m2 = (a < b) ? a : b; // nije veci
    printf("%d\n", m2);

    // apsolutna vresnost?

    int x = -123;
    int x2 = 123;

    int aps1 = (x >= 0) ? x : -x;
    int aps2 = (x2 >= 0) ? x2 : -x2;

    printf("%d %d\n", aps1, aps2);

    printf("%d %d %d\n", sizeof(char), sizeof(short), sizeof(int));
    printf("%d\n", 8*sizeof(long long));
    printf("%d %d %d\n", 8*sizeof(char), 8*sizeof(short), 8*sizeof(int));


    return 0;  
    
    }