#include <bits/stdc++.h>
using namespace std;
/* Закуцавање
https://arena.petlja.org/sr-Latn-RS/competition/os6-202324-kvalifikacije2n#tab_135684
 */
int main() {
    int h; cin >> h;
    int res;

    if ( h >= 264 ) // ne treba da skace
        res = 0;
    else
        res = 264 - h; // koliko da skoci

    cout << res;
   
    return 0;     }