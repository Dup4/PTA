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

int main()
{
	int p1, p2;
	scanf("%d%d", &p1, &p2);
	int k[2] = { 0, 0 }, num;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &num);
		k[num]++;
	}
	if (p1 > p2)
	{
		if (k[0])
			printf("The winner is a: %d + %d\n", p1, k[0]);
		else
			printf("The winner is b: %d + %d\n", p2, k[1]);
	}
	else
	{
		if (k[1])
			printf("The winner is b: %d + %d\n", p2, k[1]);
		else
			printf("The winner is a: %d + %d\n", p1, k[0]);
	}
}