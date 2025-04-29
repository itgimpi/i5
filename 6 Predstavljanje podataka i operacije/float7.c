#include <stdio.h>
#include <math.h>
/* Double nebuloze */

int main() {


    if ( 1.0 - ( 0.3 * 3 + 0.1) == 0.0) printf("OK\n");
    else printf("nije OK\n");    

    if ( fabs(1.0 - ( 0.3 * 3 + 0.1)) < 1e-9 ) printf("OK\n");
    else printf("nije OK\n"); 

    return 0;  
    
    }