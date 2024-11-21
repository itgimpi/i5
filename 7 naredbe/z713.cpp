#include <bits/stdc++.h>
using namespace std;
// ispisuje sve cifre unetog neoznaˇcenog celog broja n, poˇcevˇsi od cifre jedinica. 
// Napisati i program koji izraˇcunava sumu cifara unetog neoznaˇcenog celog broja n.



int main() { // br. 1234 -> 4321
    int n; cin >> n;
    int nn = n;
    while ( n > 0 ) {
        cout << n % 10;
        n /= 10; }

    cout << '\n'; // cout << endl;  

    do {
        cout << nn % 10;
        nn /= 10; } while ( nn > 0 );   
    
}