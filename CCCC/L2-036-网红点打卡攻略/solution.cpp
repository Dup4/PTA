#include <bits/stdc++.h>
using namespace std;
using db = long double;
using ll = long long;
using pII = pair<int, int>;
#define fi first
#define se second
const int N = 2e2 + 10;
const int INF = 0x3f3f3f3f;
const ll INFLL = 0x3f3f3f3f3f3f3f3f;
int n, m, q, g[N][N];

ll get(vector <int> vec) {
	vec.push_back(0);
	int st = 0;
	ll res = 0;
	vector <int> vis(n + 1, 0);
	for (auto &it : vec) {
		if(g[st][it] == INF) return INFLL;
		res += g[st][it];
		st = it;
		vis[it]++;
	}
	for (int i = 1; i <= n; ++i) {
		if (vis[i] != 1) 
			return INFLL;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n >> m;
	memset(g, 0x3f, sizeof g);
	for (int i = 1, u, v, w; i <= m; ++i) {
		cin >> u >> v >> w;
		g[u][v] = w;
		g[v][u] = w;
	}
	int num = 0, ix = -1;
	ll Min = INFLL;
	cin >> q;
	for (int i = 1; i <= q; ++i) {
		int _n; cin >> _n;
		vector <int> vec(_n);
		for (auto &it : vec) cin >> it;
		ll cost = get(vec);
		if (cost < Min) {
			Min = cost;
			ix = i;
		}
		if (cost < INFLL) {
			++num;
		}
	}
	cout << num << endl;
	cout << ix << ' ' << Min << endl;
	return 0;
}
