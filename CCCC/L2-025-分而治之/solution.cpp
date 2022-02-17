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

const double PI  = acos(-1);
const double E   = exp(1);
const double eps = 1e-6;

const int INF  = 0x3f3f3f3f;
const int maxn = 1e4 + 5;
const int MOD  = 1e9 + 7;

vector <int> G[maxn];

int v[maxn];

void init()
{
	CLR(G);
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int x, y;
	for (int i = 0; i < m; i++)
	{
		scanf("%d%d", &x, &y);
		G[x].pb(y);
		G[y].pb(x);
	}
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int k;
		scanf("%d", &k);
		map <int, int> M; 
		for (int j = 0; j < k; j++)
		{
			int num;
			scanf("%d", &num);
			M[num] = 1;
		}
		int flag = 1;
		vector <int>::iterator it;
		for (int i = 0; i < n; i++)
		{
			if (M[i])
				continue;
			for (it = G[i].begin(); it != G[i].end(); it++)
			{
				if (M[*it] == 0)
				{
					flag = 0;
					break;
				}
			}
		}
		printf("%s\n", flag? "YES":"NO");
	}
}













