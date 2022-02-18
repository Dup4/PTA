#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define INF 0x3f3f3f3f
#define N 100010
#define fi first
#define se second
#define pii pair<int, int>
int n, q;
ll c[N];

namespace SEG {
struct node {
    ll Min, lazy;
    node() {}
    node(ll Min, ll lazy) : Min(Min), lazy(lazy) {}
    void init() {
        Min = lazy = 0;
    }
    void add(ll x) {
        Min += x;
        lazy += x;
    }
    node operator+(const node &other) const {
        node res;
        res.init();
        res.Min = min(Min, other.Min);
        return res;
    }
} a[N << 2];
void build(int id, int l, int r) {
    a[id].init();
    if (l == r) {
        a[id].Min = c[l];
        return;
    }
    int mid = (l + r) >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);
    a[id] = a[id << 1] + a[id << 1 | 1];
}
void pushdown(int id) {
    if (!a[id].lazy)
        return;
    ll &x = a[id].lazy;
    a[id << 1].add(x);
    a[id << 1 | 1].add(x);
    x = 0;
}
void update(int id, int l, int r, int ql, int qr, ll v) {
    if (l >= ql && r <= qr) {
        a[id].add(v);
        return;
    }
    int mid = (l + r) >> 1;
    pushdown(id);
    if (ql <= mid)
        update(id << 1, l, mid, ql, qr, v);
    if (qr > mid)
        update(id << 1 | 1, mid + 1, r, ql, qr, v);
    a[id] = a[id << 1] + a[id << 1 | 1];
}
ll query(int id, int l, int r, int ql, int qr) {
    if (l >= ql && r <= qr)
        return a[id].Min;
    int mid = (l + r) >> 1;
    pushdown(id);
    ll res = (ll)1e18;
    if (ql <= mid)
        res = min(res, query(id << 1, l, mid, ql, qr));
    if (qr > mid)
        res = min(res, query(id << 1 | 1, mid + 1, r, ql, qr));
    return res;
}
}  // namespace SEG
pii a[N];

int main() {
    //	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    while (scanf("%d%d", &n, &q) != EOF) {
        for (int i = 1; i < n; ++i) scanf("%lld", c + i);
        ll res = 0;
        int l, r;
        SEG::build(1, 1, n - 1);
        for (int i = 1; i <= q; ++i) scanf("%d%d", &a[i].fi, &a[i].se);
        for (int i = 1; i <= q; ++i) {
            int &l = a[i].fi, &r = a[i].se;
            if (l > r)
                swap(l, r);
            ++l;
        }
        sort(a + 1, a + 1 + q, [&](pii a, pii b) {
            return a.se < b.se;
        });
        for (int i = 1; i <= q; ++i) {
            int l = a[i].fi, r = a[i].se;
            ll x = SEG::query(1, 1, n - 1, l, r);
            // cout << x << endl;
            res += x;
            SEG::update(1, 1, n - 1, l, r, -x);
        }
        printf("%lld\n", res);
    }
    return 0;
}
