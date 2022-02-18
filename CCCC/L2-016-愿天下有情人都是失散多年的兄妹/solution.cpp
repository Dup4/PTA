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

const int INF = 0x3f3f3f3f;
const int maxn = 1e6 + 5;
const int MOD = 1e9 + 7;

map<int, pii> m;
map<int, int> judge[2];

queue<int> q[2];

int ans;

void bfs(int cur) {
    if (cur == 7)
        return;
    for (int i = 0; i < 2; i++) {
        judge[i].clear();
        while (!q[i].empty()) {
            int num = q[i].front();
            q[i].pop();
            if (num != -1)
                judge[i][num] = 1;
        }
    }
    map<int, int>::iterator it;
    //	for (int i = 0; i < 2; i++)
    //	{
    //		for (it = judge[i].begin(); it != judge[i].end(); it++)
    //		{
    //			if (it != judge[i].begin())
    //				printf(" ");
    //			cout << it->first;
    //		}
    //		cout << endl;
    //	}
    for (it = judge[0].begin(); it != judge[0].end(); it++) {
        if (judge[1][it->first]) {
            ans = cur;
            return;
        } else
            judge[1].erase(it->first);
    }
    for (int i = 0; i < 2; i++) {
        for (it = judge[i].begin(); it != judge[i].end(); it++) {
            if (m[it->first].first != -1)
                q[i].push(m[it->first].first);
            if (m[it->first].second != -1)
                q[i].push(m[it->first].second);
        }
    }
    bfs(cur + 1);
}

int main() {
    map<int, int> vis, opt;
    int n;
    scanf("%d", &n);
    int a, b, c, d;
    char code;
    for (int i = 0; i < n; i++) {
        scanf("%d %c %d %d", &a, &code, &b, &c);
        opt[a] = 1;
        if (code == 'M')
            vis[a] = 0;
        else
            vis[a] = 1;
        m[a].first = b;
        if (b != -1) {
            if (opt[b] == 0) {
                m[b].first = -1;
                m[b].second = -1;
            }
            vis[b] = 0;
        }
        m[a].second = c;
        if (c != -1) {
            if (opt[c] == 0) {
                m[c].first = -1;
                m[c].second = -1;
            }
            vis[c] = 1;
        }
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &a, &b);
        if (vis[a] == vis[b])
            printf("Never Mind\n");
        else {
            while (!q[0].empty()) q[0].pop();
            while (!q[1].empty()) q[1].pop();
            q[0].push(a);
            q[1].push(b);
            ans = INT_MAX;
            bfs(1);
            if (ans > 5)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}