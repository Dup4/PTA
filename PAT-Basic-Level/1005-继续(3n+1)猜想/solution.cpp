#include <bits/stdc++.h>
using namespace std;
#define MAXN 105
int a[MAXN] = {0}, b[MAXN], c[MAXN];
void f(int x) {
    for (; x != 1;) {
        if (x % 2) {
            x = 3 * x + 1;
            x /= 2;
            if (x <= 100)
                a[x] = 0;
        } else {
            x /= 2;
            if (x <= 100)
                a[x] = 0;
        }
    }
}
int comp(int x, int y) {
    return x > y;
}
int main() {
    int n, i, j, num;
    cin >> n;
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
        a[b[i]] = 1;
    }
    for (i = 0; i < n; i++) f(b[i]);
    for (i = 0, j = 0; i < MAXN; i++) {
        if (a[i])
            c[j++] = i;
    }
    sort(c, c + j, comp);
    printf("%d", c[0]);
    for (i = 1; i < j; i++) printf(" %d", c[i]);
    cout << "\n";
}