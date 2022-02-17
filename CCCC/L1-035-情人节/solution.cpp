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

using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const double PI = 3.14159265358979323846264338327;
const double E = exp(1);
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e3 + 5;
const int MOD = 1e9 + 7;

int main()
{
	string l = "", r = "", s;
	for (int i = 1; ; i++)
	{
		cin >> s;
		if (s == ".")
			break;
		else if (i == 2)
			l = s;
		else if (i == 14)
			r = s;
	}
	if (l != "" && r != "")
	{
		cout << l;
		printf(" and ");
		cout << r;
		printf(" are inviting you to dinner...\n");
	}
	else if (l != "")
	{
		cout << l;
		printf(" is the only one for you...\n");
	}
	else
		printf("Momo... No one is for you ...\n");
}