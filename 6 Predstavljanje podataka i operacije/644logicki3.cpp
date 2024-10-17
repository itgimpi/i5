#include <bits/stdc++.h>
using namespace std;

int main() {
    //int p = 1, q = 0;                 C
    bool p = true;
    bool q = false;

    cout << (p || q) << endl;
    cout << (p && q) << endl;
    cout << !q << '\n';

    if ( p ) cout << "p je T";
    else cout << "p je N";

    if ( q ) cout << "q je T";
    else cout << "q je N";


    return 0;  
    
    }