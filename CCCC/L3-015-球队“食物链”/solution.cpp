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

const double PI = 3.14159265358979323846264338327;
const double E = exp(1);
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

string s[25];
int vis[20][20];

map<int, int> m;

vector<int> v;

int ans, n;

void dfs(int cur, int step) {
    if (ans == 1)
        return;
    if (step == n && ans == -1) {
        if (vis[cur][0])
            ans = 1;
        return;
    } else {
        bool cut = false;
        for (int i = 0; i < n; i++) {
            if (m[i] == 0 && vis[i][0])
                cut = true;
        }
        if (cut == false)
            return;
        for (int i = 0; i < n && ans == -1; i++) {
            if (m[i] == 0 && vis[cur][i]) {
                v.push_back(i);
                m[i] = 1;
                dfs(i, step + 1);
                if (ans == -1) {
                    m[i] = 0;
                    v.pop_back();
                } else
                    return;
            }
        }
    }
}

int main() {
    memset(vis, 0, sizeof(vis));
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        for (int j = 0; j < n; j++)
            if (s[i][j] == 'W')
                vis[i][j] = 1;
            else if (s[i][j] == 'L')
                vis[j][i] = 1;
    }
    int flag = 1;
    for (int i = 1; i < n; i++) {
        if (vis[i][0]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("No Solution\n");
    else {
        ans = -1;
        v.clear();
        m.clear();
        v.push_back(0);
        m[0] = 1;
        dfs(0, 1);
        if (ans == -1)
            printf("No Solution\n");
        else {
            vector<int>::iterator it;
            for (it = v.begin(); it != v.end(); it++) {
                if (it != v.begin())
                    printf(" ");
                cout << (*it) + 1;
            }
            cout << endl;
        }
    }
}
