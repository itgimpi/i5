#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int najv = INT_MIN;
    int najm = INT_MAX;
    for ( int i = 0; i < n; i++ ) {
        int x; cin >> x;
        if ( x > najv ) najv = x;
        if ( x < najm ) najm = x;
 
    }

    cout << najv << ' ' << najm;

    
    return 0;
}
