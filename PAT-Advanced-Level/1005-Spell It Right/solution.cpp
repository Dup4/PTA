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

string tran(int x) {
    string s = "";
    if (x == 0)
        return "0";
    while (x) {
        s += x % 10 + '0';
        x /= 10;
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    int len = s.size();
    int sum = 0;
    for (int i = 0; i < len; i++) sum += s[i] - '0';
    map<char, string> m;
    m['0'] = "zero";
    m['1'] = "one";
    m['2'] = "two";
    m['3'] = "three";
    m['4'] = "four";
    m['5'] = "five";
    m['6'] = "six";
    m['7'] = "seven";
    m['8'] = "eight";
    m['9'] = "nine";
    string ans = tran(sum);
    len = ans.size();
    for (int i = len - 1; i >= 0; i--) {
        if (i != len - 1)
            printf(" ");
        cout << m[ans[i]];
    }
    cout << endl;
}
