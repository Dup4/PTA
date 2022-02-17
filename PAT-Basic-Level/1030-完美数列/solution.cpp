#include <bits/stdc++.h>
using namespace std;
#define MAXN 100000
double a[MAXN];
int main() {
    int n, i, j, max = 0;
    double p;
    long long num;
    cin >> n >> p;
    for (i = 0; i < n; i++) scanf("%lf", &a[i]);
    sort(a, a + n);
    int total = 0;
    for (i = 0; i < n; i++) {
        num = p * a[i];
        for (j = i + max; j < n; j++) {
            if (a[j] > num)
                break;
            if (j - i + 1 > max)
                max = j - i + 1;
        }
    }
    cout << max << endl;
}