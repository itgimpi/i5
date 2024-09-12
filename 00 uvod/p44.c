#include<stdio.h>
#include<math.h>
/* Program koji ispituje da li su zadnje 2 cifre nule (00) */
int main(){

    int n; scanf("%d", &n);
    
    if ( n % 100 == 0 )
        printf("jeste\n");
    else
        printf("nije\n");
    
    

    return 0;
}

