#include <bits/stdc++.h>
using namespace std;

#define N 510
int n, m, k;
vector<int> G[N];
int v[N];
map<int, int> mp;

bool ok() {
    for (int i = 1; i <= n; ++i)
        for (auto j : G[i])
            if (v[i] == v[j])
                return 0;
    return 1;
}

int main() {
    while (scanf("%d%d%d", &n, &m, &k) != EOF) {
        for (int i = 1; i <= n; ++i) G[i].clear();
        for (int i = 1, u, v; i <= m; ++i) {
            scanf("%d%d", &u, &v);
            G[u].push_back(v);
            G[v].push_back(u);
        }
        int q;
        scanf("%d", &q);
        while (q--) {
            int cnt = 0;
            mp.clear();
            for (int i = 1; i <= n; ++i) {
                scanf("%d", v + i);
                if (mp[v[i]] == 0) {
                    mp[v[i]] = 1;
                    ++cnt;
                }
            }
            if (cnt != k)
                puts("No");
            else
                puts(ok() ? "Yes" : "No");
        }
    }
    return 0;
}
