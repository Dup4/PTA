#include <bits/stdc++.h>
using namespace std;
#define MAXN 100000
double a[MAXN];
double b[MAXN];
int main() {
    int n, i, j, m, flag = 0, k;
    double total = 0;
    cin >> n;
    for (i = 0; i < n; i++) scanf("%lf", &a[i]);
    if (n % 2)
        m = (n + 1) / 2;
    else
        m = n / 2, flag = 1;
    b[0] = (double)n;
    for (i = n - 1, j = 1; j < m; j++, i--) b[j] = i * (j + 1);
    if (flag)
        for (k = j - 1; j < n; j++, k--) b[j] = b[k];
    else
        for (k = j - 2; j < n; j++, k--) b[j] = b[k];
    // for(i=0;i<n;i++) b[i]=(n-i)*(i+1);
    for (i = 0; i < n; i++) {
        total += (double)b[i] * a[i];
    }
    printf("%.2f\n", total);
}