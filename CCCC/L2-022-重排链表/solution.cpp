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
const int maxn = 1e6 + 5;
const int MOD = 1e9 + 7;

int pos[maxn];

struct Node
{
	int add;
	int value;
	int next;
}temp;

vector <Node> ans, vis, v;

map <int, Node> m;

void dfs(int add)
{
	vis.pb(m[add]);
	if (m[add].next != -1)
		dfs(m[add].next);
}

int main()
{
	int ini, n;
	scanf("%d%d", &ini, &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &temp.add, &temp.value, &temp.next);
		m[temp.add] = temp;
	}
	dfs(ini);
	int l = 0, r = vis.size() - 1;
	while (1)
	{
		if (r < l)	
			break;
		ans.pb(vis[r]);
		r--;
		if (r < l)
			break;
		ans.pb(vis[l]);
		l++;
	}
	n = ans.size() - 1;
	for (int i = 0; i < n; i++)
		printf("%05d %d %05d\n", ans[i].add, ans[i].value, ans[i + 1].add);
	printf("%05d %d -1\n", ans[n].add, ans[n].value);
//	if (n & 1)
//	{
//		int mid = (n + 1) / 2;
//		for (int i = 1, j = n; i < mid; i++, j--)
//		{
//			ans.pb(vis[j]);
//			ans.pb(vis[i]);
//		}
//		ans.push_back(vis[mid]);
//		n = ans.size() - 1;
//		for (int i = 0; i < n; i++)
//			printf("%05d %d %05d\n", ans[i].add, ans[i].value, ans[i + 1].add);
//		printf("%05d %d -1\n", ans[n].add, ans[n].value);
//	}
//	else
//	{
//		int mid = n / 2;
//		for (int i = 1, j = n; i <= mid; i++, j--)
//		{
//			ans.pb(vis[j]);
//			ans.pb(vis[i]);
//		}
//		n = ans.size() - 1;
//		for (int i = 0; i < n; i++)
//			printf("%05d %d %05d\n", ans[i].add, ans[i].value, ans[i + 1].add);
//		printf("%05d %d -1\n", ans[n].add, ans[n].value);
//	}
}