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

int main()
{
	map <int, char> m;
	for (int i = 'z', j = 0; i >= 'a'; i--, j++)
		m[j] = i;
	int a, b;
	scanf("%d%d", &a, &b);
	b--;
	int ans[6];
	CLR(ans);
	for (int i = 0; b; i++)
	{
		ans[i] = b % 26;
		b /= 26;
	}
	string s = "";
	for (int i = 0; i < a; i++)
		s += m[ans[i]];
	reverse(s.begin(), s.end());
	cout << s << endl;
}