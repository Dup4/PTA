#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define INF 0x3f3f3f3f
#define fi first
#define se second
#define pii pair<int, int>
#define N 10010
#define M 1000010
int vis[M];
int n, q, a[N];
pii e[N];

bool ok() {
    for (int i = 1; i <= n; ++i)
        if (vis[e[i].fi] && vis[e[i].se])
            return 0;
    return 1;
}

int main() {
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) scanf("%d%d", &e[i].fi, &e[i].se);
    while (q--) {
        int k;
        cin >> k;
        for (int i = 1; i <= k; ++i) {
            scanf("%d", a + i);
            vis[a[i]] = 1;
        }
        puts(ok() ? "Yes" : "No");
        for (int i = 1; i <= k; ++i) vis[a[i]] = 0;
    }
    return 0;
}
