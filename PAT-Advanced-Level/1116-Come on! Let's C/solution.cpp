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

const double PI  = 3.14159265358979323846264338327;
const double E   = exp(1);
const double eps = 1e-6;

const int INF  = 0x3f3f3f3f;
const int maxn = 1e5 + 5;
const int MOD  = 1e9 + 7;

bool isprime(int x)
{
	int m = sqrt(x) + 1;
	for (int i = 2; i <= m; i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n, num;
	map <int, int> m, flag;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		m[num] = i;
	}
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		printf("%04d: ", num);
		int vis = m[num];
		if (vis == 0)
			printf("Are you kidding?\n");
		else if (flag[num] == 1)
			printf("Checked\n");
		else if (vis == 1)
			printf("Mystery Award\n");
		else if (isprime(vis))
			printf("Minion\n");
		else if (m[num])
			printf("Chocolate\n");
		flag[num] = 1;
	}
}