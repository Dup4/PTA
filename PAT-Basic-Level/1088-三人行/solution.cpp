#include <bits/stdc++.h>
using namespace std;

const double eps = 1e-6;
int m, x, y, a, b;
double c;
int f(int x) {
    return (x % 10) * 10 + (x / 10);
}
int get() {
    for (int i = 99; i >= 11; --i) {
        a = i, b = f(i);
        c = abs(a - b) * 1.0 / x;
        if (fabs(b - c * y) > eps)
            continue;
        return 1;
    }
    return 0;
}

char *comp(int x, double y) {
    if (x == y)
        return (char *)"Ping";
    else if (x > y)
        return (char *)"Gai";
    else
        return (char *)"Cong";
}

int main() {
    while (scanf("%d%d%d", &m, &x, &y) != EOF) {
        if (!get())
            puts("No Solution");
        else
            printf("%d %s %s %s\n", a, comp(m, a), comp(m, b), comp(m, c));
    }
    return 0;
}
