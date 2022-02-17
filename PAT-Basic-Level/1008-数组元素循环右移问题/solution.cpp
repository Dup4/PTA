#include <bits/stdc++.h>
using namespace std;
#define MAXN 100
int a[MAXN];
int main() {
    int n, m, i;
    cin >> n >> m;
    m %= n;
    for (i = m; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < m; i++) scanf("%d", &a[i]);
    printf("%d", a[0]);
    for (i = 1; i < n; i++) printf(" %d", a[i]);
    printf("\n");
}