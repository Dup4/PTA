#include <bits/stdc++.h>
using namespace std;
using pII = pair<int, int>;
#define fi first
#define se second
const int N = 1e3 + 10;

int main() {
    int a[4][4], b[15], c[4][4];
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cin >> a[i][j];
            b[a[i][j]] = 1;
            c[i][j] = 1;
        }
    }
    int x = -1;
    for (int i = 1; i <= 9; ++i) {
        if (!b[i]) {
            x = i;
        }
    }
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            if (!a[i][j]) {
                a[i][j] = x;
                c[i][j] = 1;
            }
        }
    }
    for (int i = 1, q, w; i <= 3; ++i) {
        cin >> q >> w;
        cout << a[q][w] << endl;
        c[q][w] = 1;
    }
    int w[] = {0, 0, 0, 0, 0, 0, 10000, 36, 720, 360, 80, 252, 108, 72, 54, 180, 72, 180, 119, 36, 306, 1080, 144, 1800,
            3600};
    int _w;
    cin >> _w;
    int num = 0;
    if (_w <= 3) {
        for (auto &it : {pII(_w, 1), pII(_w, 2), pII(_w, 3)}) {
            num += a[it.fi][it.se] * c[it.fi][it.se];
        }
    } else if (_w <= 6) {
        for (auto &it : {pII(1, _w - 3), pII(2, _w - 3), pII(3, _w - 3)}) {
            num += a[it.fi][it.se] * c[it.fi][it.se];
        }
    } else if (_w == 7) {
        for (auto &it : {pII(1, 1), pII(2, 2), pII(3, 3)}) {
            num += a[it.fi][it.se] * c[it.fi][it.se];
        }
    } else {
        for (auto &it : {pII(1, 3), pII(2, 2), pII(3, 1)}) {
            num += a[it.fi][it.se] * c[it.fi][it.se];
        }
    }
    cout << w[num] << endl;

    return 0;
}
