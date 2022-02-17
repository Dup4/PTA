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

int f(int y) {
    map<int, int> m;
    m.clear();
    if (y < 1000)
        m[0] = 1;
    while (y) {
        m[y % 10] = 1;
        y /= 10;
    }
    return m.size();
}

int main() {
    int y, n;
    cin >> y >> n;
    int ans = 0;
    while (1) {
        if (f(y) == n)
            break;
        y++;
        ans++;
    }
    printf("%d %04d\n", ans, y);
}