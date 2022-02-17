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
int vis[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char c[] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
bool f(string s) {
    int num = 0;
    int len = s.size();
    for (int i = 0; i < len - 1; i++) {
        num += (s[i] - '0') * vis[i];
        num %= 11;
    }
    if (s[len - 1] == c[num])
        return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    string s;
    int flag = 1;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (f(s)) {
            cout << s << endl;
            flag = 0;
        }
    }
    if (flag)
        cout << "All passed\n";
}