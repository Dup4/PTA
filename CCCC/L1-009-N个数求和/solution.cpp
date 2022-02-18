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

LL gcd(LL x, LL y)
{
	LL r;
	while (1)
	{
		r = x % y;
		if (r == 0)
			break;
		x = y;
		y = r;
	}
	return y;
}

int main()
{
	int n;
	cin >> n;
	LL a, b, c, d;
	scanf("%lld/%lld", &a, &b);
	for (int i = 1; i < n; i++)
	{
		scanf("%lld/%lld", &c, &d);
		LL temp = b * d /gcd(b, d);
		a *= (temp / b);
		a += (c * (temp / d));
		b = temp;
		temp = gcd(a, b);
		a /= temp;
		b /= temp;
	}
	LL vis = a / b;
	a %= b;
	if (vis)
	{
		printf("%lld", vis);
		if (a)
		{
			if (vis < 0 && a > 0)
				a *= -1;
			printf(" %lld/%lld", a, abs(b));
		}
	}
	else if(a) 
	{
		if (b < 0 && a > 0)
			a *= -1, b *= -1;
		printf("%lld/%lld", a, abs(b));
	}
	else 
		cout << 0 ;
	cout << endl;
}