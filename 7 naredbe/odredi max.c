#include <stdio.h>

int main() { // bez dodatne f-je
    int n; scanf("%d", &n);

    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int naj = a[0];
    for (int i = 1; i < n; i++)   
        if (a[i] > naj)
            naj = a[i]; 

    printf("%d", naj);    

}
