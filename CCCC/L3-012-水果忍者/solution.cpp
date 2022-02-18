#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define N 10010
const db eps = 1e-8;
map <int, int> u, d;
vector <int> p;
int n, lx, ly, rx, ry;
int used[N];
int sta[2][N], top[2];

bool Cu(int x1, int y1, int x2, int y2)
{
	return 1ll * x1 * y2 < 1ll * x2 * y1;
}
bool Cd(int x1, int y1, int x2, int y2)
{
	return 1ll * x1 * y2 > 1ll * x2 * y1;
}
db Y(db k, int x, int x2, int y2)
{
	return k * (x - x2) + y2; 
}

bool ok()
{
	if (rx - lx == 0) return 0;
	db k = (ry - ly) * 1.0 / (rx - lx);
	for (int i = 0, len = p.size(); i < len; ++i)
	{
		int x = p[i];
		db y = Y(k, x, rx, ry);
		if (y > u[x] || y < d[x])
			return 0;
	}
	return 1;
}

void solve()
{
	for (int i = 2; i <= top[0]; ++i)
	{
		lx = sta[0][i - 1], ly = u[lx];
		rx = sta[0][i], ry = u[rx];
		if (ok()) return;
	}
	for (int i = 2; i <= top[1]; ++i)
	{
		lx = sta[1][i - 1], ly = d[lx];
		rx = sta[1][i], ry = d[rx];
		if (ok()) return;
	}
}

int main()
{
	while (scanf("%d", &n) != EOF)
	{
		p.clear();
		memset(used, 0, sizeof used);
		for (int i = 1, x, y1, y2; i <= n; ++i)
		{
			scanf("%d%d%d", &x, &y1, &y2);
			if (u.find(x) != u.end()) 
			{
				u[x] = min(u[x], y1);
				d[x] = max(d[x], y2);
			} 
			else
			{
				p.push_back(x);
				u[x] = y1;
				d[x] = y2;
			}
		}
		if (p.size() == 1)
		{
			lx = p[0];
			ly = u[p[0]];
			rx = p[0];
			ry = d[p[0]];
		}
		else
		{
			sort(p.begin(), p.end());
			top[0] = top[1] = 0;
			for (int i = 0, len = p.size(); i < len; ++i)
			{
				int x1, x2, x3 = p[i];
				while (top[0] >= 2) 
				{
					x1 = sta[0][top[0] - 1], x2 = sta[0][top[0]];
					if (Cu(x2 - x1, u[x2] - u[x1], x3 - x2, u[x3] - u[x2]))
						--top[0];
					else
						break;
				}
				sta[0][++top[0]] = x3;
				while (top[1] >= 2) 
				{
					x1 = sta[1][top[1] - 1], x2 = sta[1][top[1]];
					if (Cd(x2 - x1, d[x2] - d[x1], x3 - x2, d[x3] - d[x2]))
						--top[1];
					else
						break;
				}
				sta[1][++top[1]] = x3;
				//printf("%d %d\n", sta[0][top[0]], sta[1][top[1]]);
			}
			solve();
		}
		printf("%d %d %d %d\n", lx, ly, rx, ry);
	}
	return 0;
}
