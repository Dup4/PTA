#include <bits/stdc++.h>
using namespace std;
using db = long double;
const int N = 1e3 + 10;
using ll = long long;

int n, q;
ll res;

void dfs(string s, int dep) {
    if (s.empty())
        return;
    char ch = s.back();
    s.pop_back();
    if (ch == 'n') {
        res += (1ll << (n - dep - 1));
    }
    dfs(s, dep + 1);
}

ll gao(string s) {
    res = 0;
    reverse(s.begin(), s.end());
    dfs(s, 0);
    return res;
}

int main() {
    string s;
    cin >> n >> q;
    for (int i = 1; i <= q; ++i) {
        cin >> s;
        cout << gao(s) + 1 << '\n';
    }
    return 0;
}
