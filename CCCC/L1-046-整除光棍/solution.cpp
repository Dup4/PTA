#include <ctype.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
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
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    LL ans;
    int len = 1;
    for (ans = 1; ans < n; ans = ans * 10 + 1) len++;
    while (1) {
        if (ans % n == 0) {
            cout << ans / n;
            break;
        } else {
            cout << ans / n;
            len++;
            ans %= n;
            ans = ans * 10 + 1;
        }
    }
    cout << " " << len << endl;
}
