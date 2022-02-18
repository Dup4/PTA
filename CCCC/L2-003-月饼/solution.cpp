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
#include <iomanip>

using namespace std;
typedef long long LL;

const double PI  = 3.14159265358979323846264338327;
const double E   = 2.718281828459;
const double eps = 1e-6;

const int MAXN = 0x3f3f3f3f;
const int MINN = 0xc0c0c0c0;
const int maxn = 1e3 + 5;
const int MOD  = 1e9 + 7;

struct Node
{
	double x, y, ave;
}q[maxn];

bool comp(Node x, Node y)
{
	return x.ave > y.ave;
}

int main()
{
	int n, d;
	scanf("%d%d", &n, &d);
	memset(q, 0, sizeof(q));
	for (int i = 0; i < n; i++)
		scanf("%lf", &q[i].x);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &q[i].y);
		q[i].ave = q[i].y / q[i].x;
	}	
	sort (q, q + n, comp);
	long double sum = 0.0;
	for (int i = 0; i < n; i++)
	{
		if (d >= q[i].x)
		{
			sum += q[i].y;
			d   -= q[i].x;
		}
		else
		{
			sum += q[i].ave * d;
			break;
		}
	}
	printf("%.2Lf\n", sum);
}