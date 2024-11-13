#include <stdio.h>

// Napisati program koji uˇcitava broj 𝑥 i ceo broj 𝑛 i izraˇcunava 𝑥 na 𝑛.

int main() { // bez dodatne f-je
    int x, n; scanf("%d %d", &x, &n);

    int res = 1;
    for (int i = 0; i < n; i++)
        res *= x;
        
    printf("%d\n", res);

}
