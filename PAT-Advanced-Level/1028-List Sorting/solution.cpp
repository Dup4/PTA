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
	int id, g;
	char name[10];
}a[maxn];

bool comp_1(Node x, Node y)
{
	return x.id < y.id;
}

bool comp_2(Node x, Node y)
{
	if (strcmp(x.name, y.name) == 0)
		return x.id < y.id;
	return strcmp(x.name, y.name) > 0 ? 0 : 1;
}

bool comp_3(Node x, Node y)
{
	if (x.g == y.g)
		return x.id < y.id;
	return x.g < y.g;
}

int main()
{
	int n, c;
	scanf("%d%d", &n, &c);
	for (int i = 0; i < n; i++)
		scanf("%d%s%d", &a[i].id, &a[i].name, &a[i].g);
	if (c == 1)
		sort(a, a + n, comp_1);
	else if (c == 2)
		sort(a, a + n, comp_2);
	else if (c == 3)
		sort(a, a + n, comp_3);
	for (int i = 0; i < n; i++)
		printf("%06d %s %d\n", a[i].id, a[i].name, a[i].g);
}






