#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define INF 0x3f3f3f3f
#define N 220
struct Graph {
    struct node {
        int to, nx, w;
        node() {}
        node(int to, int nx, int w) : to(to), nx(nx), w(w) {}
    } a[N * N];
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
string name[N];
map<string, int> id;
int n, m;
string str[2];
int st, ed;
int val[N];

struct node {
    int u, a, b, c, fa;
    node() {}
    node(int u, int a, int b, int c, int fa) : u(u), a(a), b(b), c(c), fa(fa) {}
    bool operator<(const node &other) const {
        if (a != other.a)
            return a > other.a;
        if (b != other.b)
            return b < other.b;
        return c < other.c;
    }
};
int dist[4][N];
bool used[N];
int pre[N];
void Dijkstra() {
    for (int i = 1; i <= n; ++i) {
        dist[0][i] = INF;
        dist[1][i] = dist[2][i] = -INF;
        used[i] = 0;
    }
    dist[0][1] = dist[1][1] = 0;
    dist[2][1] = val[1];
    dist[3][1] = 1;
    priority_queue<node> pq;
    pq.push(node(1, 0, 0, val[1], 0));
    vector<int> res;
    while (!pq.empty()) {
        int u = pq.top().u, fa = pq.top().fa;
        pq.pop();
        if (used[u])
            continue;
        used[u] = 1;
        pre[u] = fa;
        if (u == ed) {
            int it = u;
            while (it) {
                res.push_back(it);
                it = pre[it];
            }
            reverse(res.begin(), res.end());
            break;
        }
        erp(u) {
            if (dist[0][v] == dist[0][u] + w)
                dist[3][v] += dist[3][u];
            if (dist[0][v] > dist[0][u] + w) {
                dist[0][v] = dist[0][u] + w;
                dist[1][v] = dist[1][u] + 1;
                dist[2][v] = dist[2][u] + val[v];
                dist[3][v] = dist[3][u];
                pq.push(node(v, dist[0][v], dist[1][v], dist[2][v], u));
            } else if (dist[0][v] == dist[0][u] + w && dist[1][v] < dist[1][u] + 1) {
                dist[1][v] = dist[1][u] + 1;
                dist[2][v] = dist[2][u] + val[v];
                //				dist[3][v] += dist[3][u];
                pq.push(node(v, dist[0][v], dist[1][v], dist[2][v], u));
            } else if (dist[0][v] == dist[0][u] + w && dist[1][v] == dist[1][u] + 1 &&
                       dist[2][v] < dist[2][u] + val[v]) {
                dist[2][v] = dist[2][u] + val[v];
                //				dist[3][v] += dist[3][u];
                pq.push(node(v, dist[0][v], dist[1][v], dist[2][v], u));
            }
        }
    }
    for (int i = 0, len = res.size(); i < len; ++i) {
        cout << name[res[i]];
        if (i == len - 1)
            cout << "\n";
        else
            cout << "->";
    }
    cout << dist[3][ed] << " " << dist[0][ed] << " " << dist[2][ed] << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while (cin >> n >> m) {
        id.clear();
        G.init();
        cin >> str[0] >> str[1];
        id[str[0]] = 1;
        name[1] = str[0];
        st = 1;
        ed = -1;
        for (int i = 2; i <= n; ++i) {
            cin >> name[i] >> val[i];
            id[name[i]] = i;
            if (ed == -1 && str[1] == name[i])
                ed = i;
        }
        for (int i = 1, u, v, w; i <= m; ++i) {
            string a, b;
            cin >> a >> b >> w;
            u = id[a], v = id[b];
            G.add(u, v, w);
        }
        Dijkstra();
    }
    return 0;
}