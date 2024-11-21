#include <bits/stdc++.h>
using namespace std;
// Napisati program koji odreduje da li je uneti neoznaˇceni ceo broj prost.
// tacno ali sporo, npr za 1000000007

bool prost(int n) {
    // broj n je prost ako je deljiv samo sa 1 i n
    // broj n nije prost ako je deljiv brojem od 2 do n-1

    if ( n == 1 ) return false;
    for(int i = 2; i < n; i++) 
        if ( n % i == 0 ) // da li je n deljivo sa i?
            return false;
    // ako ne nadje nijedan deljiv...
    return true; 
}

int main() {
    int n; cin >> n;
    if (prost(n)) cout << "prost";
    else cout << "nije prost"; }