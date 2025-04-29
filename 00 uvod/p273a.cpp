#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[1000];
    for ( int i = 0; i < n; i++ )
        cin >> a[i];
    int naj = a[0];
    for (int i = 1; i < n; i++)
        if ( a[i] > naj )
            naj = a[i];
    cout << naj;
    return 0;
}
