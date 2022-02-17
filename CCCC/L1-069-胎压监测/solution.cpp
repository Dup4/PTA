#include <bits/stdc++.h>
using namespace std;
using db = long double;
using pII = pair<int, int>;
#define fi first
#define se second
const int N = 1e3 + 10;

int main() {
    pII a[10];
    int b, c;
    for (int i = 1; i <= 4; ++i) {
        cin >> a[i].fi;
        a[i].se = i;
    }
    cin >> b >> c;
    sort(a + 1, a + 5);
    int gap = a[4].fi - a[1].fi;
    if (gap <= c && a[1].fi >= b) {
        cout << "Normal\n";
    } else {
        gap = a[4].fi - a[2].fi;
        if (gap > c || a[2].fi < b) {
            cout << "Warning: please check all the tires!\n";
        } else {
            cout << "Warning: please check #" << a[1].se << "!\n";
        }
    }
    return 0;
}
