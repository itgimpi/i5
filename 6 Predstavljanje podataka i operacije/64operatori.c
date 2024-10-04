#include <stdio.h>

/* Operatori */

int main() {
    // Operator dodele
    int broj_studenata, broj_grupa;
    broj_studenata = 80;
    broj_grupa = 2;
    int aa = 5;
    //int x, y, z;
    //x = y = z = 0;

    // Aritmetiˇcki operatori
    /*
    + binarni operator sabiranja;
    - binarni operator oduzimanja;
    * binarni operator mnoˇzenja;
    / binarni operator (celobrojnog) deljenja;
    % binarni operator ostatka pri deljenju;

    - unarni operator promene znaka;
    + unarni operator.
    */

    int tmp = 2 + 3; // bin. op. sab.
    tmp = -tmp; // unarni op. / promena znaka
    
    // Inkrementiranje i dekrementiranje
    // ++ (prefiksno i postfiksno) inkrementiranje;
    // -- (prefiksno i postfiksno) dekrementiranje.

    int n = 10;
    //n++; REZULTAT JE ISTI
    //++n;
    printf("%d\n", n);

    int n1 = n++;
    int n2 = ++n;
    printf("%d %d\n", n1, n2);

    //int a = 3, b = 3, x = a++, y = ++b;
    //printf("a = %d, b = %d, x = %d, y = %d\n", a, b, x, y);

    //int a = 3, b = 3;
    //a++; ++b;
    //printf("a = %d, b = %d\n", a, b);

    int a = 3, x = a++, y = a++;
    int b = 3, z = b++ + b++;
    printf("a = %d, x = %d, y = %d,\n", a, x, y);
    printf("b = %d, z = %d\n", b, z);



    return 0;  
    
    }