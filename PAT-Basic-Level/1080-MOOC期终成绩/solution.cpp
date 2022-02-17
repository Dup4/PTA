#include <bits/stdc++.h>
using namespace std;
#define MAXN 10000
struct pp {
    string s;
    int G1 = -1, G2 = -1, G3 = -1, G = -1;
} q[MAXN];
int comp(pp x, pp y) {
    if (x.G > y.G)
        return 1;
    else if (x.G == y.G) {
        if (x.s < y.s)
            return 1;
    }
    return 0;
}
int main() {
    map<string, pp> p;
    string s;
    int n, G, i, j, p1, m;
    cin >> p1 >> m >> n;
    for (i = 0; i < p1; i++) {
        cin >> s >> G;
        if (G <= 900)
            p[s].G1 = G;
    }
    for (i = 0; i < m; i++) {
        cin >> s >> G;
        if (G <= 100)
            p[s].G2 = G;
    }
    for (i = 0; i < n; i++) {
        cin >> s >> G;
        if (G <= 100)
            p[s].G3 = G;
        if (p[s].G2 > p[s].G3)
            p[s].G = (int)(p[s].G2 * 0.4 + p[s].G3 * 0.6 + 0.5);
        else
            p[s].G = p[s].G3;
    }
    map<string, pp>::iterator it;
    for (it = p.begin(), i = 0; it != p.end(); it++) {
        if (it->second.G1 >= 200 && it->second.G >= 60) {
            q[i].s = it->first;
            q[i].G1 = it->second.G1;
            q[i].G2 = it->second.G2;
            q[i].G3 = it->second.G3;
            q[i].G = it->second.G;
            i++;
        }
    }
    sort(q, q + i, comp);
    for (j = 0; j < i; j++) {
        cout << q[j].s;
        cout << " " << q[j].G1;
        cout << " " << q[j].G2;
        cout << " " << q[j].G3;
        cout << " " << q[j].G;
        cout << "\n";
    }
}
