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
const int maxn = 1e4 + 5;
const int MOD = 1e9 + 7;

int arr[maxn], dp[maxn][105];
int n, m;

vector<int> v;

bool comp(int x, int y) {
    return x > y;
}

bool in_range(int x, int y) {
    if (x >= 0 && x < n && y > 0 && y <= m)
        return true;
    return false;
}

void dfs(int x, int y) {
    if (in_range(x, y)) {
        if (x == 0 && y == arr[x]) {
            v.push_back(arr[x]);
            return;
        }
        if (dp[x - 1][y - arr[x]]) {
            v.push_back(arr[x]);
            dfs(x - 1, y - arr[x]);
        } else
            dfs(x - 1, y);
    } else
        return;
}

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    sort(arr, arr + n, comp);
    memset(dp, 0, sizeof(dp));
    if (arr[0] <= m)
        dp[0][arr[0]] = 1;
    for (int i = 0; i < n; i++) dp[i][0] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= m; j++) {
            if (arr[i] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = (dp[i - 1][j] || dp[i - 1][j - arr[i]]);
        }
    }
    //	for (int i = 0; i < n; i++)
    //	{
    //		for (int j = 0; j <= m; j++)
    //		{
    //			if (j)
    //				printf(" ");
    //			printf("%d", dp[i][j]);
    //		}
    //		cout << endl;
    //	}
    if (dp[n - 1][m]) {
        v.clear();
        dfs(n - 1, m);
        sort(v.begin(), v.end());
        vector<int>::iterator it;
        for (it = v.begin(); it != v.end(); it++) {
            if (it != v.begin())
                printf(" ");
            cout << (*it);
        }
        cout << endl;
    } else
        printf("No Solution\n");
}
