#include <bits/stdc++.h>
using namespace std;
// Napisati program koji odreduje da li je uneti neoznaˇceni ceo broj prost.
// jos bolje

bool prost(int n) {
    // broj n je prost ako je deljiv samo sa 1 i n
    // broj n nije prost ako je deljiv brojem od 2 do n-1

    if ( n == 1 ) return false;
    if ( n == 2 || n == 3) return true; // 2 ili 3?
    if ( n % 2 == 0 || n % 3 == 0) return false; // paran ali nije 2?
    int koren = sqrt(n);
    for(int i = 5; i <= koren; i+=2) // samo do korena
        if ( n % i == 0 ) // da li je n deljivo sa i?
            return false;
    // ako ne nadje nijedan deljiv...
    return true; 
}

int main() {
    int n; cin >> n;
    if (prost(n)) cout << "prost";
    else cout << "nije prost"; }