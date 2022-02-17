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
typedef pair<string, int> psi;
typedef pair<string, string> pss;

const double PI = 3.14159265358979323846264338327;
const double E = exp(1);
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

ll n;

double z, r;

struct Node
{
	int tot;
	vector <int> v;
}temp;

ld ans = 0.0;

vector <Node> d, da;

void dfs(int x, int cur)
{
	if (d[x].tot == 0)
	{
		ans += z * pow(r, cur) * d[x].v[0];
		return;
	}
	vector <int>::iterator it;
	for (it = d[x].v.begin(); it != d[x].v.end(); it++)
	{
		dfs((*it), cur + 1);
	}
}

int main()
{
	int num;
	scanf("%lld%lf%lf", &n, &z, &r);
	r = (100 - r) * 1.0 / 100;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp.tot);
		temp.v.clear();
		if (temp.tot == 0)
		{
			scanf("%d", &num);
			temp.v.pb(num);
		}
		for (int j = 0; j < temp.tot; j++)
		{
			scanf("%d", &num);
			temp.v.pb(num);
		}
		d.pb(temp);
	}
	dfs(0, 0);
	printf("%.0Lf\n", ans - 0.5);
}