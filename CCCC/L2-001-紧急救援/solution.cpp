#include <bits/stdc++.h>
using namespace std;

#define N 510
#define INF 0x3f3f3f3f
struct Graph
{
	struct node
	{
		int to, nx, w;
		node () {}
		node (int to, int nx, int w) : to(to), nx(nx), w(w) {}
	}a[N * N];
	int head[N], pos;
	void init()
	{
		memset(head, -1, sizeof head);
		pos = 0;
	}
	void add(int u, int v, int w)
	{
		a[++pos] = node(v, head[u], w); head[u] = pos;
		a[++pos] = node(u, head[v], w); head[v] = pos;
	}
}G;
#define erp(u) for (int it = G.head[u], v = G.a[it].to, w = G.a[it].w; ~it; it = G.a[it].nx, v = G.a[it].to, w = G.a[it].w)
int n, m, st, ed;
int val[N];

struct node
{
	int u, a, b, fa;
	node () {}
	node (int u, int a, int b, int fa) : u(u), a(a), b(b), fa(fa) {}
	bool operator < (const node &other) const
	{
		if (a != other.a)
			return a > other.a;
		return b < other.b;
	}
};
int dist[N][2];
int tot[N], fa[N];
bool used[N];
void Dij()
{
	for (int i = 0; i < n; ++i)
	{
		used[i] = 0;
		dist[i][0] = INF;
		dist[i][1] = 0;
		tot[i] = 0;
	}
	tot[st] = 1;
	dist[st][0] = 0;
	dist[st][1] = val[st];
	priority_queue <node> pq;
	pq.push(node(st, dist[st][0], dist[st][1], -1));
	while (!pq.empty())
	{
		int u = pq.top().u, pre = pq.top().fa; pq.pop();
		if (used[u]) continue;
		used[u] = 1;
		fa[u] = pre;
		if (u == ed)
		{
			vector <int> ord;
			while (u != -1)
			{
				ord.push_back(u);
				u = fa[u];
			}	
			reverse(ord.begin(), ord.end());
			printf("%d %d\n", tot[ed], dist[ed][1]);
			for (int i = 0, len = ord.size(); i < len; ++i)
				printf("%d%c", ord[i], " \n"[i == len - 1]);
			return;
		}
		erp(u) 
		{
			if (dist[v][0] > dist[u][0] + w)
			{
				dist[v][0] = dist[u][0] + w;
				dist[v][1] = dist[u][1] + val[v];
				tot[v] = tot[u];
				pq.push(node(v, dist[v][0], dist[v][1], u));
			}
			else if (dist[v][0] == dist[u][0] + w)
			{
				tot[v] += tot[u];
				if (dist[v][1] < dist[u][1] + val[v])
				{
					dist[v][1] = dist[u][1] + val[v];
					pq.push(node(v, dist[v][0], dist[v][1], u));
				}
			}
		}
	}
}

int main()
{
	scanf("%d%d%d%d", &n, &m, &st, &ed);
	for (int i = 0; i < n; ++i) scanf("%d", val + i);
	G.init();
	for (int i = 1, u, v, w; i <= m; ++i)
	{
		scanf("%d%d%d", &u, &v, &w);
		G.add(u, v, w);
	}
	Dij();
	return 0;
}
