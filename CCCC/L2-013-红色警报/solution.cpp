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
const int maxn = 5e2 + 5;
const int MOD = 1e9 + 7;

int G[maxn][maxn];
int v[maxn];

int n, m;

void dfs(int x) {
    v[x] = 1;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0 && G[x][i] == 1)
            dfs(i);
    }
}

void init() {
    CLR(G);
    CLR(v);
}

int main() {
    scanf("%d%d", &n, &m);
    int x, y;
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &x, &y);
        G[x][y] = G[y][x] = 1;
    }
    int fin = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            dfs(i);
            fin++;
        }
    }
    int k;
    scanf("%d", &k);
    for (int i = 0; i < k; i++) {
        scanf("%d", &x);
        for (int j = 0; j < n; j++) G[x][j] = G[j][x] = 0;
        int temp = 0;
        CLR(v);
        for (int j = 0; j < n; j++) {
            if (v[j] == 0) {
                dfs(j);
                temp++;
            }
        }
        if (temp > fin + 1)
            printf("Red Alert: City %d is lost!\n", x);
        else
            printf("City %d is lost.\n", x);
        fin = temp;
        if (i == n - 1)
            printf("Game Over.\n");
    }
}
