#include<stdio.h>
#include<math.h>
/* Naredni program ispisuje kvadrate i korene svih celih brojeva od 1 do 100. */
int main(){
    for ( int i = 1; i <= 100; ++i ) {
        printf( "%d %d %f\n", i, i*i, sqrt(i) );
    }
    
    

    return 0;
}

