#include <bits/stdc++.h>
using namespace std;
/* Просек и медијана  */
int main() {
    long long a, b, c; cin >> a >> b;
/* prosek(a,b,c)≤medijana(a,b,c)
ako su a, b, c poredjani, medijana je b!  
    ( a + b + c ) / 3 <= b / *3
      a + b + c       <= 3 * b
      c <= 2 * b - a
      c = 2 * b - a


*/  
    if ( a > b ) swap(a, b);
    cout << 2 * b - a;
   
    return 0;     }