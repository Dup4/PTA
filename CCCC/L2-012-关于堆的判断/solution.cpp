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
const int maxn = 1e3 + 5;
const int MOD = 1e9 + 7;

int main() {
    map<int, int> vis;
    int n, m, num;
    scanf("%d%d", &n, &m);
    vector<int> v;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        num = -num;
        v.push_back(num);
        push_heap(v.begin(), v.end());
    }
    for (int i = 0; i < n; i++) vis[-v[i]] = i + 1;
    while (m--) {
        int a, b, c, d;
        string s;
        cin >> a;
        cin >> s;
        if (s == "and")  // 2
        {
            cin >> b;
            cin >> s;
            cin >> s;
            c = vis[a];
            d = vis[b];
            if (v[c / 2] == v[d / 2] && c != d)
                cout << "T\n";
            else
                cout << "F\n";
        } else {
            cin >> s;
            if (s == "the") {
                cin >> s;
                if (s == "root")  // 1
                {
                    if (vis[a] == 1)
                        cout << "T\n";
                    else
                        cout << "F\n";
                } else  // 3
                {
                    cin >> s;
                    cin >> b;
                    c = vis[a];
                    d = vis[b];
                    if (d / 2 == c)
                        cout << "T\n";
                    else
                        cout << "F\n";
                }
            } else  // 4
            {
                cin >> s;
                cin >> s;
                cin >> b;
                c = vis[a];
                d = vis[b];
                if (c / 2 == d)
                    cout << "T\n";
                else
                    cout << "F\n";
            }
        }
    }
}