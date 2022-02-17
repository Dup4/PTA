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
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

vector<int> arr[maxn], ans;

int n, Cur;

queue<int> q;

int Count;

void bfs(int cur) {
    int len = q.size();
    for (int i = 0; i < len; i++) {
        int num = q.front();
        q.pop();
        vector<int>::iterator it;
        for (it = arr[num].begin(); it != arr[num].end(); it++) {
            q.push(*it);
            Count++;
        }
    }
    if (Count == n) {
        while (!q.empty()) {
            int num = q.front();
            q.pop();
            ans.pb(num);
        }
        sort(ans.begin(), ans.end());
        Cur = cur + 1;
        return;
    }
    bfs(cur + 1);
}

int main() {
    scanf("%d", &n);
    int vis;
    int num;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);
        if (num != -1)
            arr[num].pb(i);
        else
            vis = i;
    }
    if (n == 1)
        printf("1\n1\n");
    else {
        Count = 1;
        q.push(vis);
        bfs(1);
        printf("%d\n", Cur);
        vector<int>::iterator it;
        for (it = ans.begin(); it != ans.end(); it++) {
            if (it != ans.begin())
                printf(" ");
            printf("%d", *it);
        }
        printf("\n");
    }
}
