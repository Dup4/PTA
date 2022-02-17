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

const double PI = 3.14159265358979323846264338327;
const double E = exp(1);
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

vector<int> ans[100];
int vis[100];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vis[i]);
        vis[i] *= 10;
    }
    int count = 1;
    while (1) {
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (ans[i].size() < vis[i]) {
                if (ans[i].size() && count - ans[i][ans[i].size() - 1] == 1)
                    count++;
                ans[i].pb(count++);
                if (ans[i].size() < vis[i])
                    flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
    for (int i = 0; i < n; i++) {
        printf("#%d\n", i + 1);
        for (int j = 0; j < vis[i]; j++) {
            printf("%d", ans[i][j]);
            if (j && (j + 1) % 10 == 0)
                printf("\n");
            else
                printf(" ");
        }
    }
}