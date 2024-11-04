#include <bits/stdc++.h>
using namespace std;
/* Nesusedni
https://arena.petlja.org/sr-Latn-RS/competition/20212022kvalifikacije-vezba#tab_134035
 */
int main() {
    char c1, c2; cin >> c1 >> c2;
    int a1, a2; cin >> a1 >> a2;

    if ( abs(a1 - a2) > 1 ) cout << "nemoguce";

    else { // moguce, razlika je 0 ili 1
        // a1 treba da ima vise znakova
        if ( a1 < a2 ) swap(c1, c2); 
        for (int i = 0; i < a1 + a2; i++) {
            if (i % 2 == 0) cout << c1;
            else cout << c2;
        }

    } 
   
    return 0;     }