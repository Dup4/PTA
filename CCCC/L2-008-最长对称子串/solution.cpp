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
const int maxn = 1e3 + 5;
const int MOD  = 1e9 + 7;

int main()
{
	string s;
	getline(cin, s);
	string cnt = "#";
	int len = s.size();
	for (int i = 0; i < len; i++)
		cnt += s[i], cnt += '#';
	len = cnt.size();
	int ans = 1;
	for (int i = 0; i < len; i++)
	{
		int temp = 0;
		if (cnt[i] != '#')
			temp ++;
		for (int j = i - 1, l = i + 1; j >= 0 && l < len; j--, l++)  
		{
			if (cnt[j] == cnt[l])
			{
				if (cnt[j] != '#')
					temp += 2;
			}
			else
				break;
		}
		ans = max(ans, temp);
	}
	printf("%d\n", ans);
}


















