#include <bits/stdc++.h>
using namespace std;
int main() {
    double W, T, L, total = 1.0, MAX;
    int i;
    for (i = 0; i < 3; i++) {
        cin >> W >> T >> L;
        MAX = max(max(W, T), L);
        if (MAX == W) {
            total *= W;
            cout << "W ";
        } else if (MAX == T) {
            total *= T;
            cout << "T ";
        } else if (MAX == L) {
            total *= L;
            cout << "L ";
        }
    }
    printf("%.2lf\n", (total * 0.65 - 1) * 2);
}