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

string tran(string s) {
    int len = s.size();
    string ans = "";
    char c = s[0];
    int num = 1;
    for (int i = 1; i < len; i++) {
        if (s[i] == c)
            num++;
        else {
            ans += c;
            ans += num + '0';
            c = s[i];
            num = 1;
        }
    }
    ans += c;
    ans += num + '0';
    return ans;
}

int main() {
    string ans;
    cin >> ans;
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) ans = tran(ans);
    cout << ans << endl;
}
