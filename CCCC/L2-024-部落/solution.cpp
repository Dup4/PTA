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
const int maxn   = 1e4 + 5; 
const int MOD    = 1e9 + 7;
int pre[maxn], arr[maxn];
int find(int x)
{
	int r = x;
	while (pre[r] != r)
		r = pre[r];
	pre[x] = r;                 
	return r; 
}
void join(int x, int y)
{
	int fx = find(x), fy = find(y);
	if (x != fy)
		pre[fx] = fy;
}	

int main()
{
	int n, mi;
	int num, vis;
	cin >> n;
	int i, j, k = 0;
	map <int, int> q;
	map <int, int> m;
	map <int, int> flag;
	flag.clear();
	m.clear();
	q.clear();
	for (i = 0; i < maxn; i++)
		pre[i] = i;
	for (i = 0; i < n; i++)
	{
		cin >> mi;
		cin >> num;
		flag[num] = 1;
		for (j = 1; j < mi; j++)
		{
			scanf("%d", &vis);
			join(num, vis);
			flag[vis] = 1;
		}
	}
	map <int, int>::iterator it;
	for (it = flag.begin(); it != flag.end(); it++)
		arr[k++] = it -> first;
	int len = k;
	for (i = 0; i < k; i++)
		q[find(arr[i])] = 1;
	cout << len << " " << q.size() << endl;
	scanf("%d", &mi);
	for (i = 0; i < mi; i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		if (find(a) == find(b))
			printf("Y\n");
		else
			printf("N\n");

	}
}
