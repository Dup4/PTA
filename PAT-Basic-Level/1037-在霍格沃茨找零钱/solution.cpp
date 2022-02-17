#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d, e, f, tot1 = 0, tot2 = 0, total;
    scanf("%d.%d.%d %d.%d.%d", &a, &b, &c, &d, &e, &f);
    tot1 = (a * 17 + b) * 29 + c;
    tot2 = (d * 17 + e) * 29 + f;
    if (tot1 < tot2) {
        total = tot2 - tot1;
        a = total / 493;
        total %= 493;
        b = total / 29;
        c = total % 29;
        printf("%d.%d.%d\n", a, b, c);
    } else if (tot1 == tot2)
        printf("0.0.0\n");
    else {
        total = tot1 - tot2;
        a = total / 493;
        total %= 493;
        b = total / 29;
        c = total % 29;
        printf("-%d.%d.%d\n", a, b, c);
    }
}