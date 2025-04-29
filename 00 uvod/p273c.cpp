#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int naj = INT_MIN;
    while ( n-- ) {
        int x; cin >> x;
        if ( x > naj ) naj = x;
    }

    cout << naj;

    
    return 0;
}
