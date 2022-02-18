#include <bits/stdc++.h>
using namespace std;

#define N 1010
#define M 1000010 
#define INF 0x3f3f3f3f
int n, m, st, ed;
struct Graph
{
	struct node
	{
		int to, nx, l, t;
		node () {}
		node (int to, int nx, int l, int t) : to(to), nx(nx), l(l), t(t) {}
	}a[M << 1];
	int head[N], pos;
	void init()
	{
		memset(head, 0, sizeof head);
		pos = 0;
	}
	void add(int u, int v, int l, int t)
	{
		a[++pos] = node(v, head[u], l, t); head[u] = pos; 
	}
}G;
#define erp(u) for (int it = G.head[u], v = G.a[it].to, l = G.a[it].l, t = G.a[it].t; it; it = G.a[it].nx, v = G.a[it].to, l = G.a[it].l, t = G.a[it].t)
int Time, Dis;

namespace Dij
{
	struct node
	{
		int to, a, b, fa;
		node () {}
		node (int to, int a, int b, int fa) : to(to), a(a), b(b), fa(fa) {} 
		bool operator < (const node &other) const
		{
			if (a != other.a)
				return a > other.a;
			return b > other.b;
		}
	};
	
	int dist[N][2], fa[N]; 
	bool used[N]; 
	void work1(vector <int> &res)
	{
		for (int i = 1; i <= n; ++i) 
		{
			dist[i][0] = dist[i][1] = INF;  
			fa[i] = -1;
			used[i] = 0;
		}
		dist[st][0] = dist[st][1] = 0;
		priority_queue <node> pq;
		pq.push(node(st, 0, 0, 0));
		while (!pq.empty())
		{
			int u = pq.top().to, pre = pq.top().fa; pq.pop();
			if (used[u]) continue; 
			used[u] = 1;
			fa[u] = pre;
			if (u == ed)
			{
				Time = dist[u][0];  
				int it = u;
				while (it)
				{
					res.push_back(it);
					it = fa[it];
				}
				reverse(res.begin(), res.end());
				return;
			}
			erp(u) 
			{
				if (dist[v][0] > dist[u][0] + t) 
				{
					dist[v][0] = dist[u][0] + t;
					dist[v][1] = dist[u][1] + l; 
					pq.push(node(v, dist[v][0], dist[v][1], u));  
				}
				else if (dist[v][0] == dist[u][0] + t && dist[v][1] > dist[u][1] + l)
				{
					dist[v][0] = dist[u][0] + t;
					dist[v][1] = dist[u][1] + l;
					pq.push(node(v, dist[v][0],dist[v][1], u)); 
				}
			}
		} 
	}
	void work2(vector <int> &res)
	{
		for (int i = 1; i <= n; ++i) 
		{
			dist[i][0] = dist[i][1] = INF;  
			fa[i] = -1; 
			used[i] = 0;
		}
		dist[st][0] = dist[st][1] = 0;
		priority_queue <node> pq;
		pq.push(node(st, 0, 0, 0));
		while (!pq.empty())
		{
			int u = pq.top().to, pre = pq.top().fa; pq.pop();
			if (used[u]) continue; 
			used[u] = 1;
			fa[u] = pre;
			if (u == ed)
			{
				Dis = dist[u][0];
				int it = u; 
				while (it)
				{
					res.push_back(it);
					it = fa[it];
				}
				reverse(res.begin(), res.end());
				return;
			}
			erp(u) 
			{
				if (dist[v][0] > dist[u][0] + l) 
				{
					dist[v][0] = dist[u][0] + l;
					dist[v][1] = dist[u][1] + 1; 
					pq.push(node(v, dist[v][0], dist[v][1], u));  
				}
				else if (dist[v][0] == dist[u][0] + l && dist[v][1] > dist[u][1] + 1)
				{
					dist[v][0] = dist[u][0] + l;
					dist[v][1] = dist[u][1] + 1;
					pq.push(node(v, dist[v][0],dist[v][1], u)); 
				}
			}
		} 
	}
}

bool same(vector <int> l, vector <int> r)
{
	if ((int)l.size() != (int)r.size())
		return 0;
	int len = (int)l.size();
	for (int i = 0; i < len; ++i)
		if (l[i] != r[i])
			return 0;
	return 1;
}

void out(vector <int> vec)
{
	int len = (int)vec.size();
	for (int i = 0; i < len; ++i)
	{
		printf("%d", vec[i] - 1);
		if (i != len - 1)
			printf(" => ");
		else
			printf("\n");
	}
}

int main()
{
	while (scanf("%d%d", &n, &m) != EOF)
	{
		G.init();
		for (int i = 1, u, v, tp, l, t; i <= m; ++i)
		{
			scanf("%d%d%d%d%d", &u, &v, &tp, &l, &t);
			++u, ++v;
			G.add(u, v, l, t);
			if (tp == 0) 
				G.add(v, u, l, t);
		}
		scanf("%d%d", &st, &ed); ++st, ++ed;
		vector <int> res[2];
		Dij::work1(res[0]);
		Dij::work2(res[1]);
		if (same(res[0], res[1]))
		{
			printf("Time = %d; Distance = %d: ", Time, Dis);
			out(res[0]);
		}
		else
		{
			printf("Time = %d: ", Time);
			out(res[0]);
			printf("Distance = %d: ", Dis);
			out(res[1]);
		}
	}
	return 0;
}
