#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <cstdlib>
#include <ctype.h>
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
int f(string s)
{
	int len = s.size();
	int i;
	int num = 0;
	if (s[0] == '0')
		return -1;
	for (i = 0; i < len; i++)
	{
		if (s[i] <= '9' && s[i] >= '0')
			num = num * 10 + (s[i] - '0');
		else
		{
			return -1;
		}
	}
	return num;
}

int main()
{
	string a, b;
	cin >> a;
	getchar();
	getline(cin, b);
//	cout << b << endl;
	int n = f(a);
	int m = f(b);
	if (n >= 1 && n <= 1000 && m >= 1 && m <= 1000)
		printf("%d + %d = %d\n", n, m, n + m);
	else if(n <= 1000 && n >= 1)
		printf("%d + ? = ?\n", n);
	else if (m <= 1000 && m >= 1)
		printf("? + %d = ?\n", m);
	else
		printf("? + ? = ?\n");
}