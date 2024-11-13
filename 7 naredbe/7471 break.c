#include <stdio.h>

// break

int main() {
    int n = 100;
    for(int i = 0; i < n; i++) {
        if(i > 10) // ako je i > 10
            break; // izadji iz petlje
        printf("%d ", i);

}
    
}