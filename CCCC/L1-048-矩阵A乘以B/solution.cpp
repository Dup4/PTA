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
const int maxn = 1e2 + 5;
const int MOD = 1e9 + 7;
int a[maxn][maxn], b[maxn][maxn], c[maxn][maxn];

int main() {
    int x1, y1;
    int x2, y2;
    cin >> x1 >> y1;
    int i, j, k;
    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    for (i = 0; i < x1; i++) {
        for (j = 0; j < y1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    cin >> x2 >> y2;
    for (i = 0; i < x2; i++) {
        for (j = 0; j < y2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    if (y1 != x2) {
        printf("Error: %d != %d\n", y1, x2);
    } else {
        printf("%d %d\n", x1, y2);
        int num = 0;
        for (i = 0; i < x1; i++) {
            for (j = 0; j < y2; j++) {
                if (j)
                    printf(" ");
                num = 0;
                for (k = 0; k < x2; k++) {
                    num += a[i][k] * b[k][j];
                }
                cout << num;
            }
            cout << endl;
        }
    }
}
