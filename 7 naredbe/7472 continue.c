#include <stdio.h>

// continue

int main() {
    int n = 100;
    for(int i = 0; i < n; i++) {
        if(i % 10 == 0) // ako je broj deljiv sa 10
            continue; // nastavi sa sledecom iteracijom
        printf("%d ", i);

}
    
}