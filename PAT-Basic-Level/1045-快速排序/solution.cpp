#include <bits/stdc++.h>
using namespace std;
#define MAXN 100000
int a[MAXN][2], b[MAXN];
int main() {
    int n, i, j, min, max;
    cin >> n;
    scanf("%d", &a[0][0]);
    max = a[0][0];
    a[0][1] = 1;
    for (i = 1; i < n; i++) {
        scanf("%d", &a[i][0]);
        a[i][1] = 1;
        if (a[i][0] < max)
            a[i][1] = 0;
        else
            max = a[i][0];
    }
    min = a[n - 1][0];
    for (i = n - 2; i >= 0; i--) {
        if (a[i][0] > min)
            a[i][1] = 0;
        else
            min = a[i][0];
    }
    for (i = 0, j = 0; i < n; i++) {
        if (a[i][1])
            b[j++] = a[i][0];
    }
    sort(b, b + j);
    printf("%d\n", j);
    if (j)
        printf("%d", b[0]);
    for (i = 1; i < j; i++) printf(" %d", b[i]);
    printf("\n");
}