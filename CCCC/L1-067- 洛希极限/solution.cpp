#include <bits/stdc++.h>
using namespace std;
using db = double;
const int N = 1e3 + 10;

int main() {
    db a, c, d;
    int b;
    cin >> a >> b >> c;
    if (!b)
        d = a * 2.455;
    else
        d = a * 1.26;
    printf("%.2f ", d);
    int _d = round(d * 100);
    int _c = round(c * 100);
    if (_c < _d)
        puts("T_T");
    else
        puts("^_^");
    return 0;
}
