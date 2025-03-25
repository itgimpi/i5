#include <bits/stdc++.h>
using namespace std;
/* Napisati program kojim se proverava da li su dva cela broja istog znaka.

Ulaz
Na standarnom ulazu nalaze se dva cela broja a, b različita od 0, −104≤a,b≤104.

Izlaz
Jedna linija standarnog izlaza koja sadrži reč da ako su dati brojevi istog znaka, inače sadrži reč ne.

Primer
Ulaz
234
-34
Izlaz
ne
 */
int main() {
    int a, b; cin >> a >> b;

    if (a * b > 0 )
        cout << "da";
    else
        cout << "ne";
   
    return 0;     }