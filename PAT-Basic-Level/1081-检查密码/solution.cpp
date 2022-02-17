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
const int maxn = 1e5 + 5;
const int MOD  = 1e9 + 7;

int legal(string s)
{
	int len = s.size();
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9' ) 
		{
			a = 2;
			continue;
		}
		else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			b = 3;
			continue;
		}
		else if (s[i] == '.')
			continue;
		else
			return 0;
	}		
	return a + b;
}

int main()
{
	int t;
	cin >> t;
	getchar();
	while (t--)
	{
		string s;
		getline(cin, s);
		int len = s.size();
		if (len < 6)
			printf("Your password is tai duan le.\n");
		else
		{
			int ans = legal(s);
			if (ans == 0)
				printf("Your password is tai luan le.\n");
			else if (ans == 2)
				printf("Your password needs zi mu.\n");
			else if (ans == 3)
				printf("Your password needs shu zi.\n");
			else
				printf("Your password is wan mei.\n");
		}	
	}	
}