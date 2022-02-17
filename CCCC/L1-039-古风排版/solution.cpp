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
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const double PI = 3.14159265358979323846264338327;
const double E = exp(1);
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e3 + 5;
const int MOD = 1e9 + 7;

string ans[maxn];

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    string s;
    getline(cin, s);
    int len = s.size();
    if (len <= n) {
        int i;
        for (i = 0; i < len; i++) cout << s[i] << endl;
        for (; i < n; i++) printf(" \n");
    } else {
        int cur = len / n;
        if (len % n)
            cur++;
        int count = 0;
        string temp;
        for (int i = 0; i < n; i++) {
            temp.clear();
            temp += s[count];
            ans[i].insert(0, temp);
            count++;
        }
        for (int j = 1; j < cur - 1; j++) {
            for (int i = 0; i < n; i++) {
                string temp = "";
                temp += s[count++];
                ans[i].insert(0, temp);
            }
        }
        for (int i = 0; i < n; i++) {
            if (count < s.size()) {
                temp.clear();
                temp += s[count];
                ans[i].insert(0, temp);
                count++;
            } else
                ans[i].insert(0, " ");
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << endl;
        }
    }
}