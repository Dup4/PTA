#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int vis[20010];
    while (scanf("%d", &n) != EOF) {
        memset(vis, 0, sizeof vis);
        for (int i = 1; i <= n; ++i) vis[i / 2 + i / 3 + i / 5] = 1;
        int res = 0;
        for (int i = 0; i <= 2 * n; ++i) res += vis[i];
        printf("%d\n", res);
    }
    return 0;
}
