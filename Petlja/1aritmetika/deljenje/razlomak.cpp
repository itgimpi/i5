#include <bits/stdc++.h>
using namespace std;
// Разломак у мешовит број
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka/razlomak_u_mesovit_broj
/*
Улаз
23
8
Излаз
2 7 8
*/
int main () {
    int a, b; cin >> a >> b;
    cout << a / b << ' ' << a - ( a / b ) * b << ' ' << b;
    
    
    return 0; }