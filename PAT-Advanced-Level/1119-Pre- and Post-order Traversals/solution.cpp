#include <bits/stdc++.h>
using namespace std;
using db = double;
using ll = long long;
using ull = unsigned long long;
using pII = pair<int, int>;
using pLL = pair<ll, ll>;
#define fi first
#define se second
#define dbg(x...)                             \
    do {                                      \
        cout << "\033[32;1m" << #x << " -> "; \
        err(x);                               \
    } while (0)
void err() {
    cout << "\033[39;0m" << endl;
}
template <class T, class... Ts>
void err(const T &arg, const Ts &...args) {
    cout << arg << ' ';
    err(args...);
}
template <template <typename...> class T, typename t, typename... A>
void err(const T<t> &arg, const A &...args) {
    for (auto &v : arg) cout << v << ' ';
    err(args...);
}
const int N = 1e5 + 10, INF = 0x3f3f3f3f;
int n, Unique, a[N], b[N], id[N], c[N];
vector<int> vec;
struct E {
    int son[2];
    E() {
        son[0] = son[1] = 0;
    }
} e[N];

struct SEG {
    int t[N << 2];
    void build(int id, int l, int r) {
        t[id] = INF;
        if (l == r) {
            t[id] = a[l];
            return;
        }
        int mid = (l + r) >> 1;
        build(id << 1, l, mid);
        build(id << 1 | 1, mid + 1, r);
        t[id] = min(t[id << 1], t[id << 1 | 1]);
    }
    int query(int id, int l, int r, int ql, int qr) {
        if (l >= ql && r <= qr)
            return t[id];
        int mid = (l + r) >> 1;
        int res = INF;
        if (ql <= mid)
            res = min(res, query(id << 1, l, mid, ql, qr));
        if (qr > mid)
            res = min(res, query(id << 1 | 1, mid + 1, r, ql, qr));
        return res;
    }
    int query(int l, int r) {
        return query(1, 1, n, l, r);
    }
} seg;

int gao(int al, int ar, int bl, int br) {
    if (al > ar || bl > br)
        return 0;
    int rt = a[al];
    if (al == ar)
        return rt;
    if (a[al + 1] == b[br - 1]) {
        Unique = 0;
        int Min = seg.query(al + 1, ar);
        if (Min < rt) {
            e[rt].son[0] = gao(al + 1, ar, bl, br - 1);
        } else {
            e[rt].son[1] = gao(al + 1, ar, bl, br - 1);
        }
    } else {
        int pos = id[b[br - 1]];
        int lsze = pos - 1 - al;
        e[rt].son[0] = gao(al + 1, pos - 1, bl, bl + lsze - 1);
        e[rt].son[1] = gao(pos, ar, bl + lsze, br - 1);
    }
    return rt;
}

void getprint(int u) {
    if (!u)
        return;
    getprint(e[u].son[0]);
    vec.push_back(c[u]);
    getprint(e[u].son[1]);
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        e[i] = E();
        scanf("%d", a + i);
        c[i] = a[i];
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", b + i);
    }
    sort(c + 1, c + 1 + n);
    for (int i = 1; i <= n; ++i) {
        a[i] = lower_bound(c + 1, c + 1 + n, a[i]) - c;
        b[i] = lower_bound(c + 1, c + 1 + n, b[i]) - c;
        id[a[i]] = i;
    }
    seg.build(1, 1, n);
    vec.clear();
    Unique = 1;
    getprint(gao(1, n, 1, n));
    if (Unique)
        puts("Yes");
    else
        puts("No");
    for (int i = 0; i < n; ++i) printf("%d%c", vec[i], " \n"[i == n - 1]);
    return 0;
}
