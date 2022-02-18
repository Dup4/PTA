#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define pid pair <int, db>
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define N 10010
int m, n, l, t;
int Move[][3] = 
{
	0, 0, 1,
	0, 0,-1,
	0, 1, 0,
	0,-1, 0,
	1, 0, 0,
   -1, 0, 0,
};
int G[61][1300][130];
int vis[61][1300][130];

bool ok(int x, int y, int z)
{
	if (vis[x][y][z] || x <= 0 || x > l || y <= 0 || y > n || z <= 0 || z > m || !G[x][y][z])
		return 0;
	return 1;
}

struct node
{
	int x, y, z;
	node () {}
	node (int x, int y, int z) : x(x), y(y), z(z) {}
};
int BFS(int x, int y, int z)
{
	queue <node> q;	
	q.push(node(x, y, z));
	vis[x][y][z] = 1;
	int res = 0;
	while (!q.empty())
	{
		x = q.front().x, y = q.front().y, z = q.front().z;

		++res;
		q.pop();
		for (int i = 0; i < 6; ++i)
		{
			int nx = x + Move[i][0];
			int ny = y + Move[i][1];
			int nz = z + Move[i][2]; 
			if (ok(nx, ny, nz))
			{
				vis[nx][ny][nz] = 1;
				q.push(node(nx, ny, nz));  
			}
		}	 
	}
	return res;
} 

int main()
{
	//ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	memset(vis, 0, sizeof vis);
	scanf("%d%d%d%d", &n, &m, &l, &t); 
	for (int i = 1; i <= l; ++i)
		for (int j = 1; j <= n; ++j)
			for (int k = 1; k <= m; ++k)
				scanf("%d", &G[i][j][k]); 
	int res = 0;
	for (int i = 1; i <= l; ++i)
		for (int j = 1; j <= n; ++j)
			for (int k = 1; k <= m; ++k) 
			{
				if (vis[i][j][k] || !G[i][j][k]) continue; 
				int tmp = BFS(i, j, k);
				if (tmp >= t) res += tmp;
			}
	cout << res << "\n";
	return 0;
}


