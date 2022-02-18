#include <bits/stdc++.h>
using namespace std;

constexpr int N = 1e2 + 10;
int n, a[N], b[N];

void dfs(int u) {
    if (u > n)
        return;
    dfs(u << 1);
    dfs(u * 2 + 1);
    b[u] = ++*b;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    *b = 0;
    dfs(1);
    for (int i = 1; i <= n; ++i) {
        cout << a[b[i]] << " \n"[i == n];
    }
    return 0;
}