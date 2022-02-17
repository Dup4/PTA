#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define INF 0x3f3f3f3f
#define N 100010
#define fi first
#define se second
#define pii pair <int, int>
string a, b;
int mp[1100];

int main()
{
	getline(cin, a);
	getline(cin, b);
	memset(mp, 0, sizeof mp);
	a += b;
	for (int i = 0, len = a.size(); i < len; ++i)
	{
		if (mp[a[i]]) continue;
		mp[a[i]] = 1;
		putchar(a[i]);
	}
	puts("");
	return 0;
}
