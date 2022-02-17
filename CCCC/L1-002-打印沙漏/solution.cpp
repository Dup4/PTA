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
const int maxn = 1e2 * 5 + 5;
const int MOD = 1e9 + 7;
int a[23] = {1};
char c;
void print(int n, int cur) {
    if (n == 1) {
        while (cur--) printf(" ");
        printf("%c\n", c);
    } else {
        for (int i = 0; i < cur; i++) printf(" ");
        for (int i = 0; i < n; i++) printf("%c", c);
        printf("\n");
        print(n - 2, cur + 1);
        for (int i = 0; i < cur; i++) printf(" ");
        for (int i = 0; i < n; i++) printf("%c", c);
        printf("\n");
    }
}

int main() {
    int i, j;
    for (i = 1, j = 3; i < 23; i++, j += 2) a[i] += j * 2 + a[i - 1];
    int n;
    scanf("%d %c", &n, &c);
    int vis;
    for (i = 0; i < 23; i++) {
        if (a[i] > n) {
            vis = i - 1;
            break;
        } else if (a[i] == n) {
            vis = i;
            break;
        }
    }
    print((vis + 1) * 2 - 1, 0);
    cout << n - a[vis] << endl;
}