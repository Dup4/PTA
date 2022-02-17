#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define INF 0x3f3f3f3f
#define N 100010
#define pid pair<int, db>
#define fi first
#define se second
const db eps = 0.05;
int n, m;
db A[N], B[N];
db Q[N];

void out(db *a) {
    vector<pid> vec;
    for (int i = 3000; i >= 0; --i)
        if (abs(a[i] - 0) > eps)
            vec.push_back(pid(i, a[i]));
    if (vec.empty())
        puts("0 0 0.0");
    else {
        int len = vec.size();
        printf("%d", len);
        for (int i = 0; i < len; ++i) printf(" %d %.1f", vec[i].fi, vec[i].se);
        puts("");
    }
}

int main() {
    //	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    scanf("%d", &n);
    int a = 0, b = 0;
    for (int i = 1, e, c; i <= n; ++i) {
        scanf("%d%d", &e, &c);
        A[e] = c;
        a = max(a, e);
    }
    scanf("%d", &m);
    for (int i = 1, e, c; i <= m; ++i) {
        scanf("%d%d", &e, &c);
        B[e] = c;
        b = max(b, e);
    }
    if (a < b) {
        puts("0 0 0.0");
        printf("%d", n);
        for (int i = 3000; i >= 0; --i)
            if (abs(A[i] - 0) > eps)
                printf(" %d %.1f", i, A[i]);
        puts("");
    } else {
        for (int i = 3000; i >= 0; --i) {
            int j, k;
            for (j = 3000; j >= 0; --j)
                if (abs(A[j] - 0) > eps)
                    break;
            for (k = 3000; k >= 0; --k)
                if (abs(B[k] - 0) > eps)
                    break;
            if (k > j)
                break;
            Q[j - k] = A[j] * 1.0 / B[k];
            for (int o = 0; o <= 3000; ++o)
                if (abs(B[o] - 0) > eps)
                    A[j - k + o] -= A[j] * 1.0 * B[o] / B[k];
        }
        out(Q);
        out(A);
    }
    return 0;
}
