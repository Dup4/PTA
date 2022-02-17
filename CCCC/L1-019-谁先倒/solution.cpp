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
    int arr[2] = {0};
    cin >> arr[0] >> arr[1];
    int q = arr[0], w = arr[1];
    int n;
    cin >> n;
    int a, b, c, d;
    int flag = 1;
    while (n--) {
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (flag) {
            if (a + c == b && a + c != d) {
                arr[0]--;
                if (arr[0] < 0)
                    flag = 0;
            }
            if (a + c == d && a + c != b) {
                arr[1]--;
                if (arr[1] < 0)
                    flag = 0;
            }
        } else
            continue;
    }
    if (arr[0] < 0)
        printf("A\n%d\n", w - arr[1]);
    else
        printf("B\n%d\n", q - arr[0]);
}