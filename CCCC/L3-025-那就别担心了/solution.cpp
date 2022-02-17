#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e2 + 10;
int n, m, st, ed, in[N], out[N], vis[N];
ll f[N];

vector<vector<int>> G;

void bfs(int st) {
    queue<int> que;
    que.push(st);
    vis[st] = 1;
    while (!que.empty()) {
        int u = que.front();
        que.pop();
        for (auto &v : G[u]) {
            if (!vis[v]) {
                vis[v] = 1;
                que.push(v);
            }
        }
    }
}

void topo(int st) {
    queue<int> que;
    que.push(st);
    f[st] = 1;
    while (!que.empty()) {
        int u = que.front();
        que.pop();
        for (auto &v : G[u]) {
            f[v] += f[u];
            if (--in[v] == 0) {
                que.push(v);
            }
        }
    }
}

int main() {
    scanf("%d%d", &n, &m);
    G.clear();
    G.resize(n + 1);
    memset(vis, 0, sizeof vis);
    memset(f, 0, sizeof f);
    for (int i = 1, u, v; i <= m; ++i) {
        scanf("%d%d", &u, &v);
        G[u].push_back(v);
    }
    scanf("%d%d", &st, &ed);
    bfs(st);
    for (int u = 1; u <= n; ++u) {
        for (auto &v : G[u]) {
            if (vis[u] && vis[v]) {
                ++out[u];
                ++in[v];
            }
        }
    }
    int ok = 0;
    for (int i = 1; i <= n; ++i) {
        if (vis[i] && out[i] == 0) {
            ++ok;
        }
    }
    topo(st);
    cout << f[ed] << ' ' << ((f[ed] > 0 && ok == 1) ? "Yes" : "No") << endl;
    return 0;
}
