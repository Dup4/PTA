#include <ctype.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
typedef long long LL;

const double PI = 3.14159265358979323846264338327;
const double E = 2.718281828459;
const double eps = 1e-6;

const int MAXN = 0x3f3f3f3f;
const int MINN = 0xc0c0c0c0;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

int a[maxn];

int main() {
    int n;
    cin >> n;
    int i, j;
    int vis = sqrt(n) + 1;
    memset(a, 0, sizeof(a));
    int temp;
    for (i = 2, j = 0; i <= vis; i++) {
        if (n % i == 0)
            a[j++] = i;
    }
    int len = j;
    int max = 0, ans;
    LL sum;
    for (i = 0; i < len; i++) {
        sum = a[i];
        vis = 1;
        for (j = 1;; j++) {
            sum *= (a[i] + j);
            if (n % sum != 0)
                break;
            else
                vis++;
        }
        if (vis > max) {
            max = vis;
            ans = a[i];
        }
    }
    if (len == 0) {
        cout << 1 << endl;
        cout << n << endl;
    } else {
        printf("%d\n", max);
        for (i = 0; i < max; i++) {
            if (i)
                printf("*");
            printf("%d", ans + i);
        }
        cout << endl;
    }
}