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
const int maxn = 1e3 + 5;
const int MOD = 1e9 + 7;

int arr[maxn];

int n, l;

int flag;

vector<int> ans;

void Build() {
    string temp = "";
    CLR(arr);
    int num;
    scanf("%d", &arr[1]);
    int len = 1;
    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        for (int j = 1;;) {
            if (arr[j] != 0) {
                if (num < arr[j])
                    j = j * 2 + 1;
                else
                    j *= 2;
            } else {
                arr[j] = num;
                if (j > len)
                    len = j;
                break;
            }
        }
    }
    for (int i = 1; i <= len; i++) {
        if (arr[i])
            ans.pb(arr[i]);
        else
            flag = 0;
    }
}

int main() {
    scanf("%d", &n);
    flag = 1;
    Build();
    vector<int>::iterator it;
    for (it = ans.begin(); it != ans.end(); it++) {
        if (it != ans.begin())
            printf(" ");
        printf("%d", (*it));
    }
    printf("\n");
    if (flag)
        printf("YES\n");
    else
        printf("NO\n");
}