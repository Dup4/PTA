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
const int maxn = 1e2 + 5;
const int MOD = 1e9 + 7;

int pre[maxn];

struct Node {
    vector<int> v;
};

map<int, Node> M;

int find(int x) {
    int r = x;
    while (pre[r] != r) r = pre[r];
    pre[x] = r;
    return r;
}

void join(int x, int y) {
    int fx = find(x), fy = find(y);
    if (x != fy)
        pre[fx] = fy;
}

bool Hos(int x, int y) {
    vector<int>::iterator it;
    for (it = M[x].v.begin(); it != M[x].v.end(); it++) {
        if ((*it) == y)
            return true;
    }
    return false;
}

int main() {
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j <= n; j++) pre[j] = j;
    }
    int x, y, flag;
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &x, &y, &flag);
        if (flag == 1)
            join(x, y);
        else {
            M[x].v.push_back(y);
            M[y].v.push_back(x);
        }
    }
    for (int i = 0; i < k; i++) {
        scanf("%d%d", &x, &y);
        if (find(x) == find(y)) {
            if (Hos(x, y) == true)
                printf("OK but...\n");
            else
                printf("No problem\n");
        } else {
            if (Hos(x, y) == true)
                printf("No way\n");
            else
                printf("OK\n");
        }
    }
}