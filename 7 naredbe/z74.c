#include <stdio.h>

int main() { 
    int n; scanf("%d", &n);
    printf("a)\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("*");
        printf("\n");
    }
    printf("b)\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            printf("*");
        printf("\n");
    }
    printf("c)\n");

    for (int i = 0; i < n; i++) { // spoljna petlja
        for (int j = 0; j < i + 1; j++) // unutrasnja petlja
            printf("*");
        printf("\n");
    } 
    printf("d)\n");  
    for (int i = 0; i < n; i++) { // spoljna
        for (int j = 0; j < i; j++) // unutr. 1, za razmake
            printf(" ");    
        for (int j = 0; j < n - i; j++)  // unutr. 2, za *
            printf("*");
        printf("\n");
    }
    printf("e)\n"); //
    for (int i = 0; i < n; i++) { // spoljna
        for (int j = 0; j < n - i - 1; j++) // unutr. 1, za razmake
            printf(" ");    
        for (int j = 0; j < i + 1; j++)  // unutr. 2, za *
            printf("*");
        printf("\n");
    }

    printf("f)\n");  
    for (int i = 0; i < n; i++) { // spoljna
        for (int j = 0; j < i; j++) // unutr. 1, za razmake
            printf(" ");    
        for (int j = 0; j < n - i; j++)  // unutr. 2, za *
            printf("* ");
        printf("\n");
    }

    printf("g)\n"); //
    for (int i = 0; i < n; i++) { // spoljna
        for (int j = 0; j < n - i - 1; j++) // unutr. 1, za razmake
            printf(" ");    
        for (int j = 0; j < i + 1; j++)  // unutr. 2, za *
            printf("* ");
        printf("\n");
    }        
}
