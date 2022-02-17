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
	map <char, int> m;
	m.clear();
	for (int i = 0; i < len; i++)
	{
		m[s[i]] ++;
	}
	map <char, int>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
		cout << it -> first << ":" << it -> second << endl;
}