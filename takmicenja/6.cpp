#include <bits/stdc++.h>
using namespace std;

// Broj brojeva
int main() {
    int l, d; cin >> l >> d; // leva i desna granica

    for ( int i = l; i <= d; i++ )
        for ( int ii = 0; ii < i; ii++ )
            cout << i << ' ';

    return 0;     }