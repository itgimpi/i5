#include <bits/stdc++.h>
using namespace std;
/*                Nizovi - najveci    */

int main() {
    // C++ ima i vektore
    int n; cin >> n;
    vector<int>v(n);

    for (int i = 0; i < n; i++) // unos
        cin >> v[i];

    int najveci = v[0]; // proglasi se prvi el. za najveci
    int najmanji = v[0];
    for (int i = 1; i < n; i++) {
        if ( v[i] > najveci )  // da li je novi el. veci od do sada naj...
            najveci = v[i]; // novi najveci je bas taj
        if ( v[i] < najmanji )
            najmanji = v[i];  }

    cout << najveci << ' ' << najmanji;
    return 0;     
    }