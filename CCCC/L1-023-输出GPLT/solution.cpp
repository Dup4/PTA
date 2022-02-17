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

int main()
{
	string s;
	cin >> s;
	int len = s.size();
	int i;
	int a[4] = {0};
	for (i = 0; i < len; i++)
	{
		if (s[i] == 'G' || s[i] == 'g')
			a[0]++;
		else if (s[i] == 'P' || s[i] == 'p')
			a[1]++;
		else if (s[i] == 'L' || s[i] == 'l')
			a[2]++;
		else if (s[i] == 'T' || s[i] == 't')
			a[3]++;
	}
	while (a[0] || a[1] || a[2] || a[3])
	{
		if (a[0])
		{
			printf("G");
			a[0]--;
		}
		if (a[1])
		{
			printf("P");
			a[1]--;
		}
		if (a[2])
		{
			printf("L");
			a[2]--;
		}
		if (a[3])
		{
			printf("T");
			a[3]--;
		}
	}
	cout << endl;
}