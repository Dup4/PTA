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
const double eps = 1e-30;

const int INF = 0x3f3f3f3f;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

struct Node
{
	string name;
	int tot;
	double score;
	int s;
};

bool comp(Node x, Node y)
{
	if (x.s == y.s)
	{
		if (x.tot == y.tot)
			return x.name < y.name;
		else
			return x.tot < y.tot;
	}
	return x.s > y.s;
}

int main()
{
	int n;
	cin >> n;
	map <string, Node> m;
	string id, school;
	int score;
	for (int i = 0; i < n; i++)
	{
		cin >> id >> score >> school;
		int len = school.size();
		for (int j = 0; j < len; j++)
			if (school[j] >= 'A' && school[j] <= 'Z')
				school[j] += 32;
		m[school].tot++;
		m[school].name = school;
		if (id[0] == 'A')
			m[school].score += score;
		else if (id[0] == 'B')
			m[school].score += score * 1.0 / 1.5;
		else
			m[school].score += score * 1.5;
	}
	map <string, Node>::iterator it;
	vector <Node> ans;
	for (it = m.begin(); it != m.end(); it++)
	{
		it->second.s = floor(it->second.score);
		ans.pb(it->second);
	}
	sort(ans.begin(), ans.end(), comp);
	int len = ans.size();
	cout << len << endl;
	printf("1 ");
	cout << ans[0].name;
	printf(" %d %d\n", ans[0].s, ans[0].tot);
	int rank = 1;
	for (int i = 1; i < len; i++)
	{
		if (ans[i].s != ans[i - 1].s)
			rank = i + 1;
		printf("%d ", rank);
		cout << ans[i].name;
		printf(" %d %d\n", ans[i].s, ans[i].tot);
	}
}






