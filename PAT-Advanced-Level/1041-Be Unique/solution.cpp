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
#define pb push_back

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
const double eps = 1e-30;

const int INF = 0x3f3f3f3f;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

int main() {
    int n, num;
    scanf("%d", &n);
    map<int, int> m;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        m[num]++;
        if (m[num] == 1)
            ans.pb(num);
    }
    vector<int>::iterator it;
    for (it = ans.begin(); it != ans.end(); it++) {
        if (m[*it] == 1) {
            printf("%d\n", *it);
            break;
        }
    }
    if (it == ans.end())
        printf("None\n");
}
