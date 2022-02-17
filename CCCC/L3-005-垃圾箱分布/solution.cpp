#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define pid pair<int, db>
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define N 10010
int n, m, k, Ds;
struct Graph {
    struct node {
        int to, nx, w;
        node() {}
        node(int to, int nx, int w) : to(to), nx(nx), w(w) {}
    } a[N << 1];
    int head[N], pos;
    void init() {
        memset(head, 0, sizeof head);
        pos = 0;
    }
    void add(int u, int v, int w) {
        a[++pos] = node(v, head[u], w);
        head[u] = pos;
        a[++pos] = node(u, head[v], w);
        head[v] = pos;
    }
} G;
#define erp(u) \
    for (int it = G.head[u], v = G.a[it].to, w = G.a[it].w; it; it = G.a[it].nx, v = G.a[it].to, w = G.a[it].w)

struct node {
    int to, w;
    node() {}
    node(int to, int w) : to(to), w(w) {}
    bool operator<(const node &other) const {
        return w > other.w;
    }
};
ll dist[N];
bool used[N];
void Dij(int st) {
    for (int i = 1; i <= n + m; ++i) {
        dist[i] = INF;
        used[i] = 0;
    }
    dist[st] = 0;
    priority_queue<node> pq;
    pq.push(node(st, 0));
    while (!pq.empty()) {
        int u = pq.top().to;
        pq.pop();
        if (used[u])
            continue;
        used[u] = 1;
        erp(u) if (dist[v] > dist[u] + w) {
            dist[v] = dist[u] + w;
            pq.push(node(v, dist[v]));
        }
    }
}

int read() {
    char s[10];
    scanf("%s", s);
    int tot = 0;
    int i;
    if (s[0] == 'G')
        i = 1;
    else
        i = 0;
    for (int len = strlen(s); i < len; ++i) tot = tot * 10 + (s[i] - '0');
    if (s[0] == 'G')
        tot += n;
    return tot;
}

int id;
ll total, Mindis;
void f(int now) {
    ll Max = 0, Min = INF, tot = 0;
    for (int i = 1; i <= n; ++i) {
        //		printf("%d %d %d\n", now, i, dist[i]);
        tot += dist[i];
        Max = max(Max, dist[i]);
        Min = min(Min, dist[i]);
    }
    if (Max > Ds)
        return;
    if (Min > Mindis) {
        id = now;
        total = tot;
        Mindis = Min;
    } else if (Min == Mindis && tot < total) {
        id = now;
        total = tot;
    }
}

int main() {
    // ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    G.init();
    scanf("%d%d%d%d", &n, &m, &k, &Ds);
    for (int i = 1, u, v, w; i <= k; ++i) {
        u = read();
        v = read();
        scanf("%d", &w);
        G.add(u, v, w);
    }
    Mindis = 0;
    total = INFLL;
    for (int i = 1; i <= m; ++i) {
        Dij(i + n);
        f(i);
    }
    if (total == INFLL)
        puts("No Solution");
    else {
        printf("G%d\n", id);
        printf("%.1f %.1f\n", Mindis * 1.0, total * 1.0 / n);
    }
    return 0;
}
