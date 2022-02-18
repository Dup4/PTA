#include <bits/stdc++.h>
using namespace std;

#define N 1000010
#define fi first
#define se second
#define INF 0x3f3f3f3f
#define pii pair <int, int>
int n, a[N];
struct node
{
	int v, ls, rs;
	node () {}
	node (int v) : v(v) 
	{
		ls = rs = -1;
	}
}t[N];

int cnt;
bool flag;
int root;
int DFS1(int l, int r) 
{
	if (!flag || l > r)  
		return -1;
	int id = ++cnt;
	t[id] = node(a[l]); 
	if (l == r) return id;
	int pos = r + 1;
	for (int i = l + 1; i <= r; ++i)
		if (a[i] >= a[l])
		{
			pos = i;
			break;
		}	
	for (int i = pos; i <= r; ++i)
		if (a[i] < a[l])
		{
			flag = 0;
			return -1;
		}
	t[id].ls = DFS1(l + 1, pos - 1);
	t[id].rs = DFS1(pos, r);
	return id;
}

int DFS2(int l, int r)
{
	if (!flag || l > r)
		return -1;
	int id = ++cnt;
	t[id] = node(a[l]);
	if (l == r) return id;
	int pos = r + 1;
	for (int i = l + 1; i <= r; ++i)
		if (a[i] < a[l])
		{
			pos = i;
			break;
		}
	for (int i = pos; i <= r; ++i)
		if (a[i] >= a[l])
		{
			flag = 0;
			return -1;
		}
	t[id].ls = DFS2(l + 1, pos - 1);
	t[id].rs = DFS2(pos, r);
	return id;
}

void out(int u)
{
	if (t[u].ls != -1) out(t[u].ls);
	if (t[u].rs != -1) out(t[u].rs);
	cout << t[u].v << " \n"[u == root];
}

int main()
{
	//ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i) scanf("%d", a + i);
	memset(t, -1, sizeof t);
	flag = 1; cnt = 0; root = DFS1(1, n);
	if (flag)	
	{
		cout << "YES\n";
		out(root);
		return 0;
	}
	memset(t, -1, sizeof t);
	flag = 1; cnt = 0; root = DFS2(1, n);
	if (flag)
	{
		cout << "YES\n";
		out(root);
		return 0;
	}
	cout << "NO\n";
	return 0;
}
