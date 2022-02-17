#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define SZ(x) (int(x.size()))
using pII = pair<int, int>;
const int N = 1e2 + 10, INF = 0x3f3f3f3f;
int n, a[N], b[N], c[N], _a[N], _b[N], _c[N], cnt[N];
pII son[N];

int rd() {
    string s;
    cin >> s;
    if (s == "-")
        return 0;
    int num = 0;
    for (auto &ch : s) num = num * 10 + (ch - '0');
    return num;
}

bool dfs(int al, int ar, int bl, int br, int cl, int cr, int &rt) {
    if (al > ar || bl > br || cl > cr)
        return true;
    if (b[bl] != 0 && c[cr] != 0 && b[bl] != c[cr])
        return false;
    for (int i = al; i <= ar; ++i) {
        if (a[i] != 0 && b[bl] != 0 && a[i] != b[bl])
            continue;
        if (a[i] != 0 && c[cr] != 0 && a[i] != c[cr])
            continue;
        int now = max({a[i], b[bl], c[cr]});
        son[i] = pII(0, 0);
        int len = i - al;
        if (dfs(al, i - 1, bl + 1, bl + len, cl, cl + len - 1, son[i].fi) &&
                dfs(i + 1, ar, bl + len + 1, br, cl + len, cr - 1, son[i].se)) {
            _a[i] = _b[bl] = _c[cr] = now;
            rt = i;
            return true;
        }
    }
    return false;
}

void bfs(int st) {
    vector<int> res;
    queue<int> que;
    que.push(st);
    while (!que.empty()) {
        int u = que.front();
        que.pop();
        res.push_back(_a[u]);
        if (son[u].fi)
            que.push(son[u].fi);
        if (son[u].se)
            que.push(son[u].se);
    }
    for (int i = 0; i < SZ(res); ++i) {
        cout << res[i] << " \n"[i == SZ(res) - 1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    memset(cnt, 0, sizeof cnt);
    int num = n;
    for (auto &arr : {a, b, c}) {
        for (int i = 1; i <= n; ++i) {
            arr[i] = rd();
            if (arr[i] && ++cnt[arr[i]] == 1)
                --num;
        }
    }
    for (int i = 1; i <= n; ++i) {
        _a[i] = a[i];
        _b[i] = b[i];
        _c[i] = c[i];
    }
    int rt = 0;
    if (num > 1 || !dfs(1, n, 1, n, 1, n, rt)) {
        cout << "Impossible\n";
        return 0;
    }
    num = -1;
    memset(cnt, 0, sizeof cnt);
    for (int i = 1; i <= n; ++i) ++cnt[_a[i]];
    for (int i = 1; i <= n; ++i)
        if (cnt[i] == 0)
            num = i;
    for (auto &arr : {_a, _b, _c}) {
        for (int i = 1; i <= n; ++i)
            if (arr[i] == 0)
                arr[i] = num;
        for (int i = 1; i <= n; ++i) {
            cout << arr[i] << " \n"[i == n];
        }
    }
    bfs(rt);
    return 0;
}
