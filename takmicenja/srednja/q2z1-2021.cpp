#include <bits/stdc++.h>
using namespace std;
/* Спојлер   
https://arena.petlja.org/sr-Latn-RS/competition/2022-23-kvalifikacije-2-testiranje#tab_134951
 */
int main() {
    int k1, k2; cin >> k1 >> k2; // kraj
    int p1, p2; cin >> p1 >> p2; // poluvreme

    // isti broj golova na poluvremenu i na kraju
    if ( k1 == p1 && k2 == p2 ) cout << "nijedan";
    // prvi dao manje
    else if ( k1 > p1 && k2 == p2 ) cout << "prvi";
    // drugi dao manje
    else if ( k1 == p1 && k2 > p2 ) cout << "drugi";
    // nista od navedenog...
    else cout << "?";
   
    return 0;     }