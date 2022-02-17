#include <ctype.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;
typedef long long LL;

const double PI = 3.14159265358979323846264338327;
const double E = 2.718281828459;
const double eps = 1e-6;

const int MAXN = 0x3f3f3f3f;
const int MINN = 0xc0c0c0c0;
const int maxn = 1e4 + 5;
const int MOD = 1e9 + 7;

struct Node {
    int tot, id;
    double sum;
} q[maxn];

bool comp(Node x, Node y) {
    if (x.sum == y.sum) {
        if (x.tot == y.tot)
            return x.id < y.id;
        return x.tot > y.tot;
    }
    return x.sum > y.sum;
}

int main() {
    memset(q, 0, sizeof(q));
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) q[i].id = i;
    for (int i = 0; i < n; i++) {
        int k;
        scanf("%d", &k);
        int id, num;
        for (int j = 0; j < k; j++) {
            scanf("%d%d", &id, &num);
            q[id - 1].sum += num;
            q[id - 1].tot++;
            q[i].sum -= num;
        }
    }
    sort(q, q + n, comp);
    for (int i = 0; i < n; i++) printf("%d %.2lf\n", q[i].id + 1, q[i].sum / 100);
}