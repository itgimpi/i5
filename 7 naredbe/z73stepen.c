#include <stdio.h>

// Napisati program koji uˇcitava broj 𝑥 i ceo broj 𝑛 i izraˇcunava 𝑥 na 𝑛.

int stepen(int x, int n) { // f-ja
    // x^n = x*x*....*x (n puta)

    int res = 1;
    for (int i = 0; i < n; i++)
    //for (int i = 1; i <= n; i++)
        res *= x;
    return res; }

int main() {
    int x, n; scanf("%d %d", &x, &n);

    printf("%d\n", stepen(x, n));

}
