#include <bits/stdc++.h>
using namespace std;
/*   sort   */

int main() {
    // C++ ima i vektore
    int n; cin >> n;
    vector<int>v(n);

    for (int i = 0; i < n; i++) // unos
        cin >> v[i];

    sort(begin(v), end(v));

    for (int i = 0; i < n; i++) // 1 red
        cout << v[i] << ' ';
    
    cout << '\n';
    for (int i = 0; i < n; i++) // n redova
        cout << v[i] << '\n';

    return 0;     
    }