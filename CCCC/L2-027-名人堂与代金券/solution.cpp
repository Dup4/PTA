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
const double eps = 1e-30;

const int INF = 0x3f3f3f3f;
const int maxn = 1e4 + 5;
const int MOD = 1e9 + 7;

struct Node {
    char account[16];
    int score;
    int rank;
} q[maxn];

bool comp(Node x, Node y) {
    if (x.score == y.score)
        return strcmp(x.account, y.account) < 0 ? 1 : 0;
    return x.score > y.score;
}

int main() {
    int n, g, k;
    scanf("%d%d%d", &n, &g, &k);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf(" %s%d", q[i].account, &q[i].score);
        if (q[i].score >= g)
            sum += 50;
        else if (q[i].score >= 60)
            sum += 20;
    }
    sort(q, q + n, comp);
    printf("%d\n", sum);
    q[0].rank = 1;
    printf("%d %s %d\n", 1, q[0].account, q[0].score);
    for (int i = 1; i < n; i++) {
        if (q[i].score == q[i - 1].score)
            q[i].rank = q[i - 1].rank;
        else
            q[i].rank = i + 1;
        if (q[i].rank > k)
            break;
        printf("%d %s %d\n", q[i].rank, q[i].account, q[i].score);
    }
}
