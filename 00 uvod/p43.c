#include<stdio.h>
#include<math.h>
/* Program koji ispituje da li zadnja cifra 0 */
int main(){

    int n; scanf("%d", &n);
    
    if ( n % 10 == 0 )
        printf("jeste\n", n);
    else
        printf("nije\n", n);
    
    

    return 0;
}

