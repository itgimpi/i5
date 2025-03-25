#include <bits/stdc++.h>
using namespace std;
// Divan Dan
int main() {
    int n; cin >> n; // dimenzija problema, br. svecica
    vector<int>v(n); // visine sv.

    for ( int i = 0; i < n; ++i )
        cin >> v[i];

    int najv = -1;
    for ( int i = 0; i < n; ++i ) 
        //najv = max(najv, v[i]);
        if ( v[i] > najv )
            najv = v[i];

    int res = 0;
    for ( int i = 0; i < n; ++i )   
        if ( v[i] == najv )
            res++;

    cout << res; 
   
    return 0;     }