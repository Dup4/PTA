#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000
int a[MAXN], b[MAXN];
struct pp {
    double a, b, ave;
} q[MAXN];
int comp(pp x, pp y) {
    return x.ave > y.ave;
}
int main() {
    int n, d, i;
    cin >> n >> d;
    for (i = 0; i < n; i++) scanf("%lf", &q[i].a);
    for (i = 0; i < n; i++) {
        scanf("%lf", &q[i].b);
        q[i].ave = q[i].b / q[i].a;
    }
    sort(q, q + n, comp);
    // for(i=0;i<n;i++) printf("%lf %lf %lf\n",q[i].a,q[i].b,q[i].ave);
    double total = 0;
    i = 0;
    while (d && i < 1000) {
        if (d > q[i].a) {
            d -= (int)q[i].a;
            total += q[i].b;
            // cout<<total<<endl;
        } else {
            total += q[i].ave * d;
            d = 0;
            // cout<<total<<endl;
        }
        i++;
    }
    printf("%.2lf\n", total);
}