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

const double PI = 3.14159265358979323846264338327;
const double E = exp(1);
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e3 + 5;
const int MOD = 1e9 + 7;

int pre[maxn], cou[maxn];

int find(int x) {
    int r = x;
    while (pre[r] != r) r = pre[r];
    int j = x, i;
    while (j != r) {
        i = pre[j];
        pre[j] = r;
        j = i;
    }
    return r;
}

void join(int x, int y) {
    int fx = find(x), fy = find(y);
    if (x != fy)
        pre[fx] = fy;
}

bool comp(int x, int y) {
    return x > y;
}

int main() {
    CLR(cou);
    int n, k, num;
    cin >> n;
    for (int i = 1; i <= n; i++) pre[i] = i;
    for (int i = 1; i <= n; i++) {
        scanf("%d:", &k);
        for (int j = 0; j < k; j++) {
            scanf("%d", &num);
            if (cou[num])
                join(i, cou[num]);
            else
                cou[num] = i;
        }
    }
    map<int, int> m;
    for (int i = 1; i <= n; i++) m[find(i)]++;
    vector<int> v;
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) v.push_back(it->second);
    sort(v.begin(), v.end(), comp);
    int len = v.size();
    cout << len << endl;
    for (int i = 0; i < len; i++) {
        if (i)
            printf(" ");
        printf("%d", v[i]);
    }
    cout << endl;
}