#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, i;
    cin >> t;
    double a, b, total, max = 0;
    for (i = 0; i < t; i++) {
        scanf("%lf%lf", &a, &b);
        total = a * a + b * b;
        total = sqrt(total);
        if (total > max)
            max = total;
    }
    printf("%.2lf\n", max);
}