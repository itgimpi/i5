#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int naj = INT_MIN;
    for ( int i = 0; i < n; i++ ) {
        int x; cin >> x;
        if ( (x % 2 == 0) && x > naj ) naj = x;
    }
    if ( naj == INT_MIN )
        naj = -1;
    cout << naj;

    
    return 0;
}
