#include <stdio.h>
/*                Logicki operatori
!, logička negacija — ne;
&&, logička konjunkcija — i;
||, logička disjunkcija — ili.

Logiˇcki operatori primenjuju se nad brojevnim vrednostima i imaju tip rezultata int.
Brojevnim vrednostima pridruˇzene su logiˇcke ili istinitosne vrednosti na slede´ci naˇcin: 
ukoliko je broj jednak 0, onda je njegova logiˇcka netaˇcno, 
a inaˇce je njegova logiˇcka vrednost 1 (taˇcno). 
Iako su sve vrednosti
operanada koje su razliˇcite od 0 dopuˇstene i tumaˇce se kao taˇcno, rezultat izraˇcunavanja taˇcno nije proizvoljna
vrednost razliˇcita od 0, ve´c iskljuˇcivo vrednost 1.

 */

int main() {
    int p = 123; // p je T
    int q = 0; // q je F
    printf("p=%d, q=%d\n", p, q); 
    printf("ne p=%d, ne q=%d\n", !p, !q); 
    printf("p i q je %d\n", p && q);
    printf("p ili q je %d\n", p || q);
    
    printf("5 && 4.3 je %d\n", 5 && 4.3);
    printf("10.2 || 0 %d\n", 10.2 || 0);
    printf("0 && 5 je %d\n", 0 && 5);
    printf("!1 je %d\n", !1);
    printf("!0 je %d\n", !0);
    printf("!(2>3) je %d\n", !(2>3));
    int x = 4;
    printf("3 < x && x < 5 je %d\n", 3 < x && x < 5);
    //a > b || b > c && b > d
    //(a>b) || ((b>c) && (b>d))
    







    return 0;  
    
    }