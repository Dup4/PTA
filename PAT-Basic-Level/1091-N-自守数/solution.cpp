#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define INF 0x3f3f3f3f
#define fi first
#define se second
#define pii pair<int, int>
#define N 10010
int n;

bool ok(int x, int n) {
    while (n) {
        if (x % 10 != n % 10)
            return 0;
        x /= 10;
        n /= 10;
    }
    return 1;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        bool flag = 0;
        for (int i = 1; i < 10; ++i)
            if (ok(n * n * i, n)) {
                flag = 1;
                printf("%d %d\n", i, n * n * i);
                break;
            }
        if (flag == 0)
            puts("No");
    }
    return 0;
}
