#include <stdio.h>
/*      da li je godina prestupna        */

int main() {
    int g; scanf("%d", &g); // godina
    
    int delj400 = (g % 400 == 0); // deljiva sa 400
    int delj100 = (g % 100 == 0);
    int delj4 = (g % 4 == 0);
// g % 4 == 0 && g % 100 != 0 || g % 400 == 0
    int prestupna = delj4 && !delj100 || delj400;
    if ( prestupna ) printf("da");
    else printf("ne");


    return 0;  
    
    }