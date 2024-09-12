#include<stdio.h>
#include<math.h>
/* Program koji ispituje da li je uneti broj paran */
int main(){

    int n; scanf("%d", &n);
    // kako covek proverava parnost?
    // pomocu krajnje desne cifre
    int cif;
    cif = n % 10;

    // OVO SE NE PREPORUCUJE!!!
    
    if ( cif==0 || cif==2 || cif==4 || cif==6 || cif==8 )
        printf("Broj %d je paran.\n", n);
    else
        printf("Broj %d je neparan.\n", n);
    
    

    return 0;
}

