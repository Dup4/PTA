#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000
struct q {
    string s;
    int a, b;
};
struct q a[MAXN];
int main() {
    int n, m, b;
    cin >> n;
    int i;
    for (i = 0; i < n; i++) {
        cin >> a[i].s >> a[i].a >> a[i].b;
    }
    cin >> m;
    while (m--) {
        cin >> b;
        for (i = 0; i < n; i++) {
            if (b == a[i].a) {
                cout << a[i].s << " " << a[i].b << endl;
                break;
            }
        }
    }
}