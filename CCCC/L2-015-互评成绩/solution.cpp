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

using namespace std;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const double PI = 3.14159265358979323846264338327;
const double E = exp(1);
const double eps = 1e-6;

const int INF = 0x3f3f3f3f;
const int maxn = 1e3 + 5;
const int MOD = 1e9 + 7;

bool comp(double x, double y)
{
	return x > y;
}

int main()
{
	int n, k, m;
	scanf("%d%d%d", &n, &k, &m);
	vector <double> v, ans;
	for (int i = 0; i < n; i++)
	{
		double sum = 0, Max = INT_MIN, Min = INT_MAX, num;
		for (int j = 0; j < k; j++)
		{
			scanf("%lf", &num);
			if (num > Max)
				Max = num;
			if (num < Min)
				Min = num;
			sum += num;
		}
		sum -= (Max + Min);
		sum /= (k - 2);
		v.push_back(sum);
	}
	sort(v.begin(), v.end(), comp);
	for (int i = m - 1; i >= 0; i--)
	{
		if (i != m - 1)
			printf(" ");
		printf("%.3lf", v[i]);
	}
	cout << endl;
}