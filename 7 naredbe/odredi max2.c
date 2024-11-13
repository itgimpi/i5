#include <stdio.h>

int main() { // bez dodatne f-je
    int n; scanf("%d", &n);

    int el; scanf("%d", &el); // prvi el.
    int naj = el;

    for (int i = 1; i < n; i++) {
        scanf("%d", &el);
        if (el > naj)
            naj = el;
    }

 

    printf("%d", naj);    

}
