#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define pii pair <int, int>
#define fi first
#define se second
#define N 5010
int n, m;
int x[N], y[N];
pii cor[N];

ll Cross(pii a, pii b)
{
	return abs(1ll * a.fi * b.se - 1ll * b.fi * a.se);	
}

int main()
{
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 1; i <= n; ++i)
			scanf("%d%d", x + i, y + i);
		ll res = (ll)1e18;
		for (int i = 1; i <= n; ++i)
		{
			m = 0;
			for (int j = 1; j <= n; ++j) if (i != j)
			{
				++m;
				cor[m].fi = x[j] - x[i];
				cor[m].se = y[j] - y[i];				
			}	
			sort(cor + 1, cor + 1 + m, [](pii a, pii b) 
			{
				return 1ll * a.fi * b.se < 1ll * b.fi * a.se;
			});
			for (int j = 2; j <= m; ++j)
				res = min(res, Cross(cor[j - 1], cor[j]));
		}
		printf("%.3f\n", res * 0.5);
	}
	return 0;
}
