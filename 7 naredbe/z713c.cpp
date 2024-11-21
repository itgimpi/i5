#include <bits/stdc++.h>
using namespace std;
// ispisuje sve cifre unetog neoznaˇcenog celog broja n, poˇcevˇsi od cifre jedinica. 
// Napisati i program koji izraˇcunava sumu cifara unetog neoznaˇcenog celog broja n.

int main() { // s je 1234 -> 4321
    string s; cin >> s;

    reverse(begin(s), end(s));

    for ( int i = 0; i < s.size(); i++ )
        cout << s[i];
    cout << '\n';

    for ( auto sl : s )
        cout << sl;
    cout << '\n'; 

    
    
    
}