#include <stdio.h>

/* Promenljive i imena promenljivih */

int main() {
    /* 
Imena promenljivih odredena su identifikatorima. 
U prethodnim programima koriˇs´cene su promenljive ˇcija su imena a, i, x1, x2 itd. 
 
Dodatno, kljuˇcne reˇci jezika C (na primer, if, for, while) ne mogu se koristiti kao identifikatori.*/

    int a, i;
    //int a; NE MOZE, JER JE a VEC DEKLARISANA !!! 
    char c1;
    float x1, x2;
    // Identifikator moˇze da sadrˇzi slova i cifre, 
    // kao i simbol _ (koji je pogodan za duga imena), ali identifikator ne moˇze poˇcinjati cifrom.
    int broj1; //OK
    // int 1broj; // Ne moze da pocinje cifrom!
    int q_1 = 123;
    int q1_ = 123;
    int _q1 = 123;  // dozvoljeno ali se ne preporucuje...

// velika i mala slova se razlikuju. promenljive sa imenima a i A se tretiraju kao dve razliˇcite promenljive. ˇCesta praksa je da malim slovima poˇcinju imena promenljivih i funkcija, a velikim
// imena simboliˇckih konstanti , vrednosti koje se ne menjaju u toku programa.

    int t; int T;
    int jedan; int JedaN;

//Imena promenljivih i funkcija, u principu, treba da oslikavaju njihovo znaˇcenje i ulogu u programu, 
//ali za promenljive kao ˇsto su indeksi (i) u petljama se obiˇcno koriste kratka, jednoslovna imena 
// Ako ime promenljive sadrˇzi viˇse reˇci, onda se, radi bolje ˇcitljivosti, te reˇci razdvajaju simbolom _ 
// (na primer, broj_studenata) ili poˇcetnim velikim slovima (na primer, brojStudenata) — ovo drugo je takozvana kamilja
// notacija (CamelCase). Postoje razliˇcite konvencije za imenovanje promenljivih. U nekim konvencijama, kao ˇsto
// je madarska notacija, poˇcetna slova imena promenljive predstavljaju kratku oznaka tipa te promenljive (na
// primer, iBrojStudenata).

// ANSI C standard (C89) garantuje da se barem 31 poˇcetnih znakova imena promenljive smatra znaˇcajnom,
// dok standard C99 pove´cava taj broj na 63. 

    return 0;  
    
    }