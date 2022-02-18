#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define N 100010
int n;
int x[N], y[N];
int sta[N], top;
int vis[N];

ll Cross(int a, int b, int c) {
    ll X[2] = {x[b] - x[a], x[c] - x[a]};
    ll Y[2] = {y[b] - y[a], y[c] - y[a]};
    return X[0] * Y[1] - X[1] * Y[0];
}

int main() {
    while (scanf("%d", &n) != EOF) {
        for (int i = n; i >= 1; --i) scanf("%d%d", x + i, y + i);
        top = 0;
        memset(vis, 0, sizeof vis);
        for (int i = n; i >= 1; --i) {
            if (top >= 1) {
                while (top >= 2 && Cross(sta[top - 1], sta[top], i) <= 0) --top;
                vis[sta[top]] = 1;
            }
            sta[++top] = i;
        }
        printf("%d\n", accumulate(vis + 1, vis + 1 + n, 0) - 1);
    }
    return 0;
}
