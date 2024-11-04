#include <bits/stdc++.h>
using namespace std;
/* Надквадрат
https://arena.petlja.org/sr-Latn-RS/competition/2023-2024-kv2-testiranje#tab_135699
 */
int main() {
    int x1, x2, x3, y1, y2, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    int xmax = max({x1, x2, x3});
    int xmin = min({x1, x2, x3});
    int ymax = max({y1, y2, y3});
    int ymin = min({y1, y2, y3});

    int dx = xmax - xmin;
    int dy = ymax - ymin;

    int strana = max(dx, dy);

    cout << strana * strana;
   
    return 0;     }