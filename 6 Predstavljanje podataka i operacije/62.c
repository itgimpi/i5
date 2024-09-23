#include <stdio.h>

/* tipovi podataka - celi brojevi */

int main() {
    // promenljive su samo deklarisane
    // niko ne garantuje za njihovu vrednost
    unsigned char c1, c2, c3; // neoznaceni celi brojevi 8b
    printf("%d %d %d\n", c1, c2, c3);
    unsigned short int s1, s2, s3; // neoznaceni celi brojevi 16b
    printf("%d %d %d\n", s1, s2, s3);

    // promenljive su deklarisane i izvrsena je dodela vrednosti
    // garantuje se za njihovu vrednost
    unsigned char c4 = 0, c5 = 10, c6 = 20; // neoznaceni celi brojevi 8b
    printf("%d %d %d\n", c4, c5, c6);
    unsigned short int s4 = 7, s5 = 777, s6 = 7777; // neoznaceni celi brojevi 16b
    printf("%d %d %d\n", s4, s5, s6);   

    // promenljive su prvo deklarisane
    // onda je izvrsena dodala

    unsigned short int s7, s8, s9; // neoznaceni celi brojevi 16b
    s7 = 123; s8 = 456; s9 = 2343;
    printf("%d %d %d\n", s7, s8, s9);    

    return 0;  
    
    }