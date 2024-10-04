#include <stdio.h>
/*      da li je godina prestupna        */

int main() {
    int g; scanf("%d", &g); // godina
    
    if ( g % 400 == 0 ) // svaka 400ta je prestupna
        printf("jeste");
    else {
        if ( g % 100 == 0 ) // svaka 100ta nije
            printf("nije");
        else {
            if ( g % 4 == 0 ) // svaka 4ta je prestupna
                printf("jeste");
            else 
                printf("nije");
        }

    }
      







    return 0;  
    
    }