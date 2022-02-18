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
const double eps = 1e-3;

const int INF = 0x3f3f3f3f;
const int maxn = 1e4 + 5;
const int MOD = 1e9 + 7;

int ans;

queue <int> opt;

map <int, int> q, vis;

struct Node
{
	int l, r;
}w[maxn];

void bfs(int cur)
{
	int len = opt.size();
	int Min = INF;
	while (len--)
	{
		int num = opt.front();
		opt.pop();
		if (num < Min)
			Min = num;
		if (vis[w[num].l] == 0)
		{
			opt.push(w[num].l);
			vis[w[num].l] = 1;
		}
		if (vis[w[num].r] == 0)
		{
			opt.push(w[num].r);
			vis[w[num].r] = 1;
		}
	}
	if (opt.empty())
	{
		ans = Min;
		return;
	}
	else
		bfs(cur + 1);
}

int main()
{
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int a, b;
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d", &a, &b);
		q[a] = 1;
		q[b] = 1;
		if (w[a].l)
			w[a].r = b;
		else
			w[a].l = b;
		if (w[b].l)
			w[b].r = a;
		else
			w[b].l = a;
	}
	for (int i = 0; i < k; i++)
	{
		scanf("%d", &a);
		if (q[a] == 0)
			printf("0\n");
		else
		{
			vis.clear();
			vis[0] = 1;
			while (!opt.empty())
				opt.pop();
			if (w[a].l != 0)
				opt.push(w[a].l);
			if (w[a].r != 0)
				opt.push(w[a].r);
			vis[w[a].l] = 1;
			vis[w[a].r] = 1;
			vis[a] = 1;
			bfs(1);
			printf("%d\n", ans);
		}
	}
}