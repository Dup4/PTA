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
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e2 + 5;
const int MOD = 1e9 + 7;

struct Node {
    int add;
    int value;
    int next;
} temp;

map<int, Node> m;
map<int, int> vis;

vector<Node> v[2];

int ini, n;

void dfs(int add) {
    if (vis[abs(m[add].value)] == 0) {
        v[0][v[0].size() - 1].next = m[add].add;
        v[0].pb(m[add]);
        vis[abs(m[add].value)] = 1;
    } else {
        if (v[1].size())
            v[1][v[1].size() - 1].next = m[add].add;
        v[1].pb(m[add]);
    }
    if (m[add].next != -1)
        dfs(m[add].next);
}

int main() {
    scanf("%d%d", &ini, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &temp.add, &temp.value, &temp.next);
        m[temp.add] = temp;
    }
    v[0].pb(m[ini]);
    vis[abs(m[ini].value)] = 1;
    ini = m[ini].next;
    if (ini != -1)
        dfs(ini);
    if (v[0].size()) {
        v[0][v[0].size() - 1].next = -1;
        vector<Node>::iterator it;
        for (it = v[0].begin(); it != v[0].end(); it++) {
            printf("%05d %d ", (*it).add, (*it).value);
            if ((*it).next != -1)
                printf("%05d\n", (*it).next);
            else
                cout << -1 << endl;
        }
    }
    if (v[1].size()) {
        v[1][v[1].size() - 1].next = -1;
        vector<Node>::iterator it;
        for (it = v[1].begin(); it != v[1].end(); it++) {
            printf("%05d %d ", (*it).add, (*it).value);
            if ((*it).next != -1)
                printf("%05d\n", (*it).next);
            else
                cout << -1 << endl;
        }
    }
}