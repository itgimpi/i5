#include <bits/stdc++.h>
using namespace std;
// Збир цифара четвороцифреног броја
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka/zbir_cifara
/*
Улаз
1234
Излаз
10
*/
int main () {
    int n; cin >> n; // n je 1234
    int c1, c2, c3, c4;
    c4 = n % 10; // 1234 % 10 je 4
    n /= 10; // n je 123, to je novi problem
    c3 = n % 10; // 3
    n /= 10; // 12
    c2 = n % 10;
    n /= 10; // 1
    c1 = n;


    cout << c1 + c2 + c3 + c4;
    
    return 0; }