#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define SZ(x) (int(x.size()))
using pII = pair<int, int>;
const int N = 1e3 + 10, INF = 0x3f3f3f3f;
map<string, int> mp;
int n, m, w[N], pre[N];
string st, ed, fmp[N];

vector<vector<pII> > G;

int getID(const string &s) {
    static int cnt = 0;
    if (mp.count(s) == 0) {
        mp[s] = ++cnt;
        fmp[cnt] = s;
    }
    return mp[s];
}

struct valde {
    int cost, w, num;
    valde() {}
    valde(int cost, int w, int num) : cost(cost), w(w), num(num) {}
    bool operator<(const valde &other) const {
        if (cost != other.cost)
            return cost < other.cost;
        if (w != other.w)
            return w > other.w;
        if (num != other.num)
            return num < other.num;
        return false;
    }
};

struct node {
    int to;
    valde val;
    node() {}
    node(int to, valde val) : to(to), val(val) {}
    bool operator<(const node &other) const {
        return !(val < other.val);
    }
};

valde dis[N];
bool vis[N];
int f[N];

void gao(int st) {
    for (int i = 1; i <= n; ++i) {
        dis[i] = valde(INF, w[i], 1);
        vis[i] = 0;
        f[i] = 0;
    }
    dis[st] = valde(0, w[st], 1);
    priority_queue<node> pq;
    pq.push(node(st, dis[st]));
    pre[st] = -1;
    f[st] = 1;
    while (!pq.empty()) {
        node u = pq.top();
        pq.pop();
        if (vis[u.to])
            continue;
        //		cout << u.to << " " << f[u.to] << endl;
        vis[u.to] = 1;
        for (auto &it : G[u.to]) {
            int v = it.fi, cost = it.se;
            valde tmp = u.val;
            tmp.cost += cost;
            tmp.w += w[v];
            tmp.num++;
            if (tmp.cost == dis[v].cost)
                f[v] += f[u.to];
            else if (tmp.cost < dis[v].cost)
                f[v] = f[u.to];
            if (tmp < dis[v]) {
                dis[v] = tmp;
                pre[v] = u.to;
                pq.push(node(v, tmp));
            }
        }
    }
    int ed = getID("ROM");
    //	cout << ed << endl;
    //	return;
    cout << f[ed] << " " << dis[ed].cost << " " << dis[ed].w << " " << dis[ed].w / (dis[ed].num - 1) << "\n";
    vector<int> res;
    while (ed != -1) {
        res.push_back(ed);
        ed = pre[ed];
    }
    reverse(res.begin(), res.end());
    for (int i = 0; i < SZ(res); ++i) {
        cout << fmp[res[i]];
        if (i != SZ(res) - 1)
            cout << "->";
        else
            cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ed = "ROM";
    cin >> n >> m >> st;
    G.clear();
    G.resize(n + 1);
    for (int i = 1, _w; i < n; ++i) {
        string s;
        cin >> s >> _w;
        w[getID(s)] = _w;
    }
    for (int i = 1, u, v, cost; i <= m; ++i) {
        string _u, _v;
        cin >> _u >> _v >> cost;
        u = getID(_u);
        v = getID(_v);
        G[u].push_back(pII(v, cost));
        G[v].push_back(pII(u, cost));
    }
    getID(st);
    //	for (int i = 1; i <= n; ++i) cout << fmp[i] << endl;
    gao(getID(st));
    return 0;
}