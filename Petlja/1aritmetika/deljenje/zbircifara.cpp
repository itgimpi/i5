#include <bits/stdc++.h>
using namespace std;
// Збир цифара broja n
// 
/*
Улаз
1234
Излаз
10
*/
int main () {
    int n; cin >> n; // n je 1234
    
    int zc = 0; // na pocetku...
    int brc = 0;

    while ( n > 0 ) {
        brc++;
        zc += n % 10;
        n /= 10; }

    cout << zc << endl << brc;
    
    return 0; }