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
	int n;
	cin >> n;
	map <int, int> M;
	M.clear();
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		for (int j = 0; j < m; j++)
		{
			int num;
			cin >> num;
			M[num]++;	
		}	
	}	
	map <int, int>::iterator it;
	int MAX = MINN, ans = 0;
	for (it = M.begin(); it != M.end(); it++)
	{
		if (it -> second >= MAX)
		{
			MAX = it -> second;
			ans = it -> first;
		}
	}
	printf("%d %d\n",ans, MAX);
}