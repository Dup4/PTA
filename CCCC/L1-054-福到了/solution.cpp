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
const int maxn = 1e2 + 5;
const int MOD  = 1e9 + 7;

string in[maxn], tran[maxn];

string Reverse(string s)
{
	string ans = "";
	int len = s.size();
	for (int i = len - 1; i >= 0; i--)
		ans += s[i];
	return ans;
}

int main()
{
	char c;
	int n;
	scanf(" %c%d", &c, &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		getline(cin, in[i]);
		tran[n - 1 - i] = Reverse(in[i]);
	}
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		if (in[i] != tran[i])
		{
			flag = 0;
			break;
		}
	}
	if (flag)
		printf("bu yong dao le\n");
	for (int i = 0; i < n; i++)
	{
		int len = tran[i].size();
		for (int j = 0; j < len; j++)
		{
			if (tran[i][j] != ' ')
				printf("%c", c);
			else
				printf(" ");
		}
		printf("\n");
	}
}