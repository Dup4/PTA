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
	map <char, string> m;
	m.clear();
	m['0'] = "ling" ;
	m['1'] = "yi";
	m['2'] = "er";
	m['3'] = "san";
	m['4'] = "si";
	m['5'] = "wu";
	m['6'] = "liu";
	m['7'] = "qi";
	m['8'] = "ba";
	m['9'] = "jiu";
	m['-'] = "fu";
	string s;
	cin >> s;
	int len = s.size();
	for (int i = 0; i < len; i++)
	{
		if (i)
			cout << " ";
		cout << m[s[i]];
	}
	cout << endl;
}