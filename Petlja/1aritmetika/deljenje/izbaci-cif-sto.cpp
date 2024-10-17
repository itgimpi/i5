#include <bits/stdc++.h>
using namespace std;
// Избаци цифру стотина
// https://petlja.org/sr-Latn-RS/biblioteka/r/Zbirka/izbaci_cifru_stotina
/*
Улаз
123456
Излаз
12356
*/
int main () {
    int n; cin >> n; // n je 123456
    int prvi = n / 1000;
    int drugi = n % 100;
    cout << prvi << drugi;
    
    
    return 0; }