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
    string s;
    cin >> s;
    int len = s.size();
    int flag[2] = {0};
    int vis = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == '-') {
            flag[0] = 1;
        } else {
            if (s[i] == '2')
                vis++;
            if (i == len - 1 && s[i] % 2 == 0)
                flag[1] = 1;
        }
    }
    double ans = 0.0;
    if (flag[0])
        ans = vis * 1.0 / (len - 1) * 1.5;
    else
        ans = vis * 1.0 / len;
    if (flag[1])
        ans *= 2;
    printf("%.2lf%%\n", ans * 100);
}