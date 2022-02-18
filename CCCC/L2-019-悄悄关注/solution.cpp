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
typedef pair<string, int> psi;

const double PI = 3.14159265358979323846264338327;
const double E = exp(1);
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

int main() {
    map<string, int> m;
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        m[s] = 1;
    }
    scanf("%d", &n);
    vector<psi> v;
    vector<string> ans;
    int num;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> s >> num;
        if (m[s] == 0)
            v.push_back(psi(s, num));
        sum += num;
    }
    sum /= n;
    vector<psi>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        if ((*it).second > sum)
            ans.push_back((*it).first);
    }
    if (ans.size()) {
        sort(ans.begin(), ans.end());
        vector<string>::iterator iter;
        for (iter = ans.begin(); iter != ans.end(); iter++) {
            cout << (*iter) << endl;
        }
    } else
        printf("Bing Mei You\n");
}