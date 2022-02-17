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
const double PI  = 3.14159265358979323846264338327;
const double E   = 2.718281828459;  
const double eps = 1e-6;
const int MAXN   = 0x3f3f3f3f;
const int MINN   = 0xc0c0c0c0;
const int maxn   = 1e5 + 5; 
const int MOD    = 1e9 + 7;

int main()
{
	map <string, string> m;
	m["ChuiZi"] = "Bu";
	m["Bu"] = "JianDao";
	m["JianDao"] = "ChuiZi";
	int k;
	cin >> k;
	k ++;
	string s;
	for (int i = 1; ; i++)
	{
		cin >> s;
		if (s == "End")
			break;
		else
		{
			if (i % k == 0)
				cout << s << endl;
			else
				cout << m[s] << endl;
		}
	}
}
