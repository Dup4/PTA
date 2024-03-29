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
    int a, b;
    scanf("%d:%d", &a, &b);
    if (a < 12 || (a == 12 && b == 0))
        printf("Only %02d:%02d.  Too early to Dang.\n", a, b);
    else {
        a -= 12;
        for (int i = 0; i < a; i++) printf("Dang");
        if (b)
            printf("Dang");
        cout << endl;
    }
}