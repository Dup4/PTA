#include <bits/stdc++.h>
using namespace std;
#define MAXN 100000
struct pp {
    string s;
    int a, b, c;
} q[MAXN];
int jude(int a, int b, int c) {
    if (a > 2014 || a < 1814)
        return 0;
    else if (a == 2014) {
        if (b > 9)
            return 0;
        else if (b == 9) {
            if (c > 6)
                return 0;
        }
    } else if (a == 1814) {
        if (b < 9)
            return 0;
        else if (b == 9) {
            if (c < 6)
                return 0;
        }
    }
    return 1;
}
int comp(pp x, pp y) {
    if (x.a > y.a)
        return 0;
    else if (x.a == y.a) {
        if (x.b > y.b)
            return 0;
        else if (x.b == y.b) {
            if (x.c > y.c)
                return 0;
        }
    }
    return 1;
}
int main() {
    string s;
    int n, i, a, b, c, j = 0;
    cin >> n;
    for (i = 0, j = 0; i < n; i++) {
        cin >> s;
        scanf("%d/%d/%d", &a, &b, &c);
        if (jude(a, b, c)) {
            q[j].s = s;
            q[j].a = a, q[j].b = b, q[j].c = c;
            j++;
        }
    }
    if (j >= 2)
        sort(q, q + j, comp);
    printf("%d", j);
    if (j > 1)
        cout << " " << q[0].s << " " << q[j - 1].s;
    else if (j == 1)
        cout << " " << q[0].s << " " << q[0].s;
    cout << endl;
}