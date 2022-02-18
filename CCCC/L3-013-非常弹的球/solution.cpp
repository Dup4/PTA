#include <ctype.h>
#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, int> psi;
typedef pair<string, string> pss;

const double PI = 3.14159265358979323846264338327;
const double E = exp(1);
const double eps = 1e-6;
const double G = 9.8;

const int INF = 0x3f3f3f3f;
const int maxn = 1e6 + 5;
const int MOD = 1e9 + 7;

int main() {
    int w, p;
    scanf("%d%d", &w, &p);
    double m = 1000.0;
    double sun = p * 1.0 / 100;
    sun = 1 - sun;
    double weight = w * 1.0 / 100;
    double ans = 0.0;
    while (1) {
        double v = sqrt(m * 1.0 / weight);
        double t = 2 * v / G;
        m *= sun;
        ans += v * t;
        if (t < eps)
            break;
    }
    printf("%.3lf\n", ans);
}