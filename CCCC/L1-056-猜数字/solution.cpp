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

#define CLR(a) memset(a, 0, sizeof(a))
#define pb push_back

using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const double PI  = 3.14159265358979323846264338327;
const double E   = exp(1);
const double eps = 1e-6;

const int INF  = 0x3f3f3f3f;
const int maxn = 1e4 + 5;
const int MOD  = 1e9 + 7;

struct Node
{
	int n;
	char name[10];
}q[maxn];

int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf(" %s%d", &q[i].name, &q[i].n);
		sum += q[i].n;
	}
	sum /= (2 * n);
	int lim = INF;
	int ans;
	for (int i = 0; i < n; i++)
	{
		if (abs(q[i].n - sum) < lim)
		{
			lim = abs(q[i].n - sum);
			ans = i;
		}
	}
	printf("%d %s\n", sum, q[ans].name);
}