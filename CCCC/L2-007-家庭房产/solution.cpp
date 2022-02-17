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
const int maxn = 1e6 + 5;
const int MOD = 1e9 + 7;

int pre[10000];

int find(int x) {
    while (pre[x] != x) x = pre[x];
    return x;
}

void join(int x, int y) {
    int fx = find(x), fy = find(y);
    if (x != fy)
        pre[fx] = fy;
}

struct Node {
    int id;
    int total;
    int tot;
    double ave, area;
} temp, q[maxn];

bool comp(Node x, Node y) {
    if (fabs(x.area - y.area) < eps)
        return x.id < y.id;
    return x.area > y.area;
}

int main() {
    for (int i = 0; i < 10000; i++) pre[i] = i;
    int n;
    cin >> n;
    map<int, Node> m;
    map<int, int> vis;
    for (int i = 0; i < n; i++) {
        int id, a, b, k;
        scanf("%d%d%d%d", &id, &a, &b, &k);
        vis[id] = 1;
        if (a != -1) {
            join(id, a);
            vis[a] = 1;
        }
        if (b != -1) {
            join(id, b);
            vis[b] = 1;
        }
        for (int j = 0; j < k; j++) {
            scanf("%d", &a);
            if (a != -1) {
                join(id, a);
                vis[a] = 1;
            }
        }
        scanf("%d%d", &a, &b);
        m[id].id = id;
        m[id].tot = a;
        m[id].area = b;
    }
    map<int, int>::iterator it, iter;
    int count = 0;
    for (it = vis.begin(); it != vis.end(); it++) {
        temp.id = 0;
        temp.tot = 0;
        temp.tot = 0;
        temp.ave = 0.0;
        temp.area = 0.0;
        if (it->second == 1) {
            it->second = 0;
            int flag = find(it->first);
            temp.id = it->first;
            temp.tot += m[it->first].tot;
            temp.area += m[it->first].area;
            temp.total = 1;
            for (iter = it, iter++; iter != vis.end(); iter++) {
                if (iter->second == 1 && flag == find(iter->first)) {
                    iter->second = 0;
                    if (m[iter->first].id == iter->first) {
                        if (iter->first < temp.id)
                            temp.id = iter->first;
                        temp.tot += m[iter->first].tot;
                        temp.area += m[iter->first].area;
                    }
                    temp.total++;
                }
            }
            temp.ave = temp.tot * 1.0 / temp.total;
            temp.area /= temp.total;
            q[count++] = temp;
        }
    }
    sort(q, q + count, comp);
    printf("%d\n", count);
    for (int i = 0; i < count; i++) {
        printf("%04d %d %.3lf %.3lf\n", q[i].id, q[i].total, q[i].ave, q[i].area);
    }
}
