#include<stdio.h>
#include<math.h>
/* Program koji ispituje da li je uneti broj paran */
int main(){

    int n; scanf("%d", &n);


    // OVO SE PREPORUCUJE!!!
    
    if ( n % 2 == 0 )
        printf("Broj %d je paran.\n", n);
    else
        printf("Broj %d je neparan.\n", n);
    
    

    return 0;
}

