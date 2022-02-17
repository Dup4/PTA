#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL gcd(LL x, LL y) {
    LL r;
    while (1) {
        r = x % y;
        if (!r)
            break;
        x = y;
        y = r;
    }
    return y;
}
struct pp {
    LL a = 0, b, total = 0;
} n1, n2, n11, n22;
pp tran(pp x) {
    LL num = gcd(x.a, x.b);
    if (num < 0)
        num *= -1;
    x.a /= num, x.b /= num;
    x.total += x.a / x.b;
    x.a %= x.b;
    if (x.a < 0 && x.total)
        x.a *= -1;
    return x;
}
void print(pp x) {
    if (x.total != 0 && x.a != 0) {
        if (x.total < 0)
            printf("(%d %d/%d)", x.total, x.a, x.b);
        else
            printf("%d %d/%d", x.total, x.a, x.b);
    } else if (x.a) {
        if (x.a < 0)
            printf("(%d/%d)", x.a, x.b);
        else
            printf("%d/%d", x.a, x.b);
    } else if (x.total) {
        if (x.total < 0)
            printf("(%d)", x.total);
        else
            printf("%d", x.total);
    } else
        printf("0");
}
pp pluss(pp x, pp y) {
    pp num;
    LL m = (x.b * y.b) / gcd(x.b, y.b);
    num.a = (x.a * (m / x.b) + y.a * (m / y.b)), num.b = m;
    num = tran(num);
    return num;
}
pp minuss(pp x, pp y) {
    if (y.total)
        y.total *= -1;
    else if (y.a)
        y.a *= -1;
    pp num = pluss(x, y);
    return num;
}
pp times(pp x, pp y) {
    pp num;
    if (x.a && y.a) {
        num.a = x.a * y.a;
        num.b = x.b * y.b;
    }
    num = tran(num);
    return num;
}
void paint(pp x, pp y, pp num, char c) {
    print(x);
    printf(" %c ", c);
    print(y);
    printf(" = ");
    print(num);
    cout << endl;
}
int main() {
    scanf("%lld/%lld %lld/%lld", &n1.a, &n1.b, &n2.a, &n2.b);
    n11 = tran(n1), n22 = tran(n2);
    if (n1.a)
        paint(n11, n22, pluss(n1, n2), '+');
    else {
        printf("0 + ");
        print(n22);
        printf(" = ");
        print(n22);
        cout << endl;
    }
    if (n1.a)
        paint(n11, n22, minuss(n1, n2), '-');
    else {
        printf("0 - ");
        print(n22);
        printf(" = ");
        pp temp = n2;
        temp.a *= -1;
        print(tran(temp));
        cout << endl;
    }
    if (n2.a && n1.a) {
        paint(n11, n22, times(n1, n2), '*');
    } else if (n1.a) {
        print(n11);
        printf(" * 0 = 0\n");
    } else {
        printf("0 * ");
        print(n22);
        printf(" = 0\n");
    }
    if (n2.a && n1.a) {
        if (n2.a < 0)
            n2.a *= -1, n2.b *= -1;
        swap(n2.a, n2.b);
        paint(n11, n22, times(n1, n2), '/');
    } else if (n1.a) {
        print(n11);
        printf(" / 0 = Inf\n");
    } else {
        printf("0 / ");
        print(n22);
        printf(" = 0\n");
    }
}