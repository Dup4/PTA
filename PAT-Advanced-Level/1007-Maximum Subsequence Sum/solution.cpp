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

#define CLR(a) memset(a, 0, sizeof(a))

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

const int INF = 0x3f3f3f3f;
const int maxn = 1e4 + 5;
const int MOD = 1e9 + 7;

int arr[maxn];

int main() {
    int n;
    cin >> n;
    int l, r, ans = -1, num, temp = 0, vis, flag = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i == 0 || flag) {
            vis = arr[i];
            flag = 0;
        }
        temp += arr[i];
        if (temp < 0) {
            temp = 0;
            flag = 1;
            continue;
        }
        if (temp > ans) {
            ans = temp;
            l = vis;
            r = arr[i];
        }
    }
    if (ans != -1)
        printf("%d %d %d\n", ans, l, r);
    else
        printf("%d %d %d\n", 0, arr[0], arr[n - 1]);
}