#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define SZ(x) (int(x.size()))
using pII = pair<int, int>;
const int N = 1.1e6 + 10, INF = 0x3f3f3f3f;
int n;
string s;

struct Hash {
    int seed, mod;
    int base[N], a[N];
    void init(int _seed, int _mod, const string &s) {
        seed = _seed;
        mod = _mod;
        base[0] = 1;
        for (int i = 1; i < N; ++i) {
            base[i] = 1ll * base[i - 1] * seed % mod;
        }
        a[0] = 0;
        for (int i = 1; i < SZ(s); ++i) {
            a[i] = (1ll * a[i - 1] * seed % mod + s[i]) % mod;
        }
    }
    inline int get(int l, int r) {
        return (a[r] - 1ll * a[l - 1] * base[r - l + 1] % mod + mod) % mod;
    }
} hs;

inline bool ok(int x, int y) {
    if (hs.get(x, x + n - 1) == hs.get(y, y + n - 1))
        return false;
    int l = 1, r = n, res = 0;
    while (r - l >= 0) {
        int mid = (l + r) >> 1;
        if (hs.get(x, x + mid - 1) == hs.get(y, y + mid - 1)) {
            res = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    if (res < n && s[x + res] > s[y + res])
        return true;
    return false;
}

struct node {
    int ix, val, num;
    node() {}
    node(int ix, int val, int num) : ix(ix), val(val), num(num) {}
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    getline(cin, s);
    getline(cin, s);
    s.insert(0, "0");
    hs.init(233, 998244353, s);
    vector<node> vec, _vec;
    for (int i = 1; i + n <= SZ(s); ++i) {
        vec.emplace_back(i, hs.get(i, i + n - 1), 1);
    }
    sort(vec.begin(), vec.end(), [&](node a, node b) {
        return a.val < b.val;
    });
    _vec.push_back(vec.back());
    vec.pop_back();
    while (!vec.empty()) {
        node tmp = vec.back();
        vec.pop_back();
        if (tmp.val == _vec.back().val)
            ++_vec.back().num;
        else
            _vec.push_back(tmp);
    }
    sort(_vec.begin(), _vec.end(), [&](node a, node b) {
        return a.num > b.num;
    });
    node res = _vec[0];
    for (int i = 1; i < SZ(_vec); ++i) {
        node now = _vec[i];
        if (res.num > now.num)
            break;
        else if (ok(res.ix, now.ix))
            res = now;
    }
    cout << s.substr(res.ix, n) << " " << res.num << "\n";
    return 0;
}