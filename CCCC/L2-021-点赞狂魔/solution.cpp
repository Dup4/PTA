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
const int maxn   = 1e2 + 5; 
const int MOD    = 1e9 + 7;
struct node
{
	string s;
	int tot;
	int k;
}temp;
int comp (node x, node y)
{
	if (x.tot == y.tot)
		return x.k < y.k;
	return x.tot > y.tot;
}
vector <node> q;
int main()
{
	int n;
	int i, j;
	map <int, int> vis;
	string s;
	int k, tot, num;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		vis.clear();
		cin >> temp.s >> temp.k;
		temp.tot = 0;
		for (j = 0; j < temp.k; j++)
		{
			scanf("%d", &num);
			if (vis[num] == 0)
				temp.tot++;
			vis[num]++;
		}
		q.push_back(temp);
	}
	sort (q.begin(), q.end(), comp);
	temp.s = "-";
	for (i = 0; i < 3; i++)
		q.push_back(temp);
	for (i = 0; i < 3; i++)
	{
		if (i)
			printf(" ");
		cout << q[i].s;
	}
	cout << endl;
}
