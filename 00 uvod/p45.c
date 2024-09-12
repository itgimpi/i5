#include<stdio.h>
#include<math.h>
/* Program koji ispituje da li je prvi broj deljiv drugim */
int main(){
    int prvi, drugi; 
    scanf("%d %d", &prvi, &drugi);
    
    if ( prvi % drugi == 0 )
        printf("jeste\n");
    else
        printf("nije\n");
    
    

    return 0;
}

