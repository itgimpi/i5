#include<stdio.h>
// Makroi
#define staro novo
#define MAXN 1005
#define sum(A, B) A + B
#define f(x) x * x
#define f2(x) (x) * (x)
#define f3(x) ((x) * (x))
#define suma(A, B) ((A) + (B))
#define max(A, B) ((A) > (B) ? (A) : (B)) 
#define print(s) printf("%s\n", s)
#define print2(s) printf("%s\n", s);

int main() {
    int staro = 5;
    printf("%d\n", staro); printf("%d\n", novo);
    printf("%d\n", MAXN);
    int a = 5, b = 10;
    printf("%d\n", sum(a, b));
    printf("%d\n", f(5)); printf("%d\n", f(a));
    printf("%d\n", f(a + 1)); // 11
    printf("%d\n", f2(a + 1)); //
    printf("%d\n", a / f2(a)); 
    printf("%d\n", a / f3(a));
    printf("%d\n", a / max(1, 2)); printf("%d\n", a / max(2, 1));
    print("neki tekst");
    print2("neki tekst")





   
    return 0; }