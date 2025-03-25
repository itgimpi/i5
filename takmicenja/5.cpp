#include <bits/stdc++.h>
using namespace std;
// Kratak zadatak
int main() {
    int a, b, k; cin >> a >> b >> k; // 

    int res = 0;
    
    for ( int i = a; i <= b; ++i )
        if ( i % k == 0 )
            res++;
        
    cout << res;

    return 0;     }