#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define INF 0x3f3f3f3f
#define fi first
#define se second
#define pii pair<int, int>
#define N 10010
int n, k;
char s[N];

bool isprime(ll x) {
    for (int i = 2; 1ll * i * i <= x; ++i)
        if (x % i == 0)
            return 0;
    return 1;
}

ll getf(int l, int r) {
    ll res = 0;
    for (int i = l; i <= r; ++i) res = res * 10 + s[i] - '0';
    return res;
}

void work() {
    for (int i = k; i <= n; ++i) {
        ll x = getf(i - k + 1, i);
        if (isprime(x)) {
            printf("%0*lld\n", k, x);
            return;
        }
    }
    puts("404");
}

int main() {
    while (scanf("%d%d", &n, &k) != EOF) {
        scanf("%s", s + 1);
        work();
    }
    return 0;
}
