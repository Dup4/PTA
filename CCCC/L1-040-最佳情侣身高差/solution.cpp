#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <map>
#include <stack>
#include <set>
#include <numeric>
#include <sstream>
#include <iomanip>
#include <limits>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const double PI = 3.14159265358979323846264338327;
const double E = exp(1);
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e3 + 5;
const int MOD = 1e9 + 7;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char c;
		double h;
		scanf(" %c %lf", &c, &h);
		if (c == 'M')
			printf("%.2lf\n", h / 1.09);
		else
			printf("%.2lf\n", h * 1.09);
	}
}