#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int naj = INT_MIN;
    for ( int i = 0; i < n; i++ ) {
        int x; cin >> x;
        if ( x > naj ) naj = x;
    }

    cout << naj;
    return 0;
}
