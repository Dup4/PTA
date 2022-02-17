#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <map>
#include <stack>
#include <set>
#include <numeric>
#include <sstream>

using namespace std;
typedef long long LL;

const double PI = 3.14159265358979323846264338327;
const double E = 2.718281828459;
const double eps = 1e-6;

const int MAXN = 0x3f3f3f3f;
const int MINN = 0xc0c0c0c0;
const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
	string s;
	int n;
	char vis;
	scanf("%d %c ", &n, &vis);
	getline(cin, s);
	int len = s.size();
	if (len <= n)
	{
		n -= len;
		while (n--)
			cout << vis;
		cout << s << endl;
	}
	else
	{
		for (int i = len - n; i < len; i++)
			cout << s[i];
		cout << endl;
	}
}