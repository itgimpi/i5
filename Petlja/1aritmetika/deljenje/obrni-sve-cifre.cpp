#include <bits/stdc++.h>
using namespace std;
// obrni sve cifre na prevaru
/*
Улаз
12345
Излаз
54321
*/
int main () {
    string s; cin >> s; // s je 12345

    for (int i = 0; i < s.length(); i++)
        cout << s[i];

    cout << endl;

    for (int i = s.length() - 1; i >= 0 ; i--)
        cout << s[i];    
    
    return 0; }