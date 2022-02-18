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
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const double PI = 3.14159265358979323846264338327;
const double E = 2.718281828459;
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

int main() {
    set<int> s[51];
    int n, num, k;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &k);
        for (int j = 0; j < k; j++) {
            scanf("%d", &num);
            s[i].insert(num);
        }
    }
    scanf("%d", &k);
    int x, y;
    for (int i = 0; i < k; i++) {
        scanf("%d%d", &x, &y);
        int nt = s[x].size() + s[y].size();
        int nc = 0;
        set<int>::iterator it;
        for (it = s[x].begin(); it != s[x].end(); it++) {
            if (s[y].count(*it))
                nc++;
        }
        nt -= nc;
        printf("%.2lf%%\n", nc * 1.0 / nt * 100);
    }
}