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
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

int arr[maxn];

bool comp(int x, int y) {
    return x > y;
}

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    sort(arr, arr + n, comp);
    int ans = n / 2;
    if (n % 2)
        ans++;
    int vis = 0;
    for (int i = 0; i < ans; i++) vis += arr[i];
    printf("Outgoing #: %d\n", ans);
    printf("Introverted #: %d\n", n - ans);
    printf("Diff = %d\n", 2 * vis - sum);
}