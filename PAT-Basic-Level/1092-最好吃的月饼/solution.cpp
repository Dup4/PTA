#include <bits/stdc++.h>
using namespace std;

#define db double
#define ll long long
#define INF 0x3f3f3f3f
#define fi first
#define se second
#define pii pair <int, int>
#define N 10010
int n, m, a[N];

int main()
{
	memset(a, 0, sizeof a);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= m; ++i)
	{
		int x; 
		for (int j = 1; j <= n; ++j)
			scanf("%d", &x), a[j] += x;
	}
	int Max = *max_element(a + 1, a + 1 + n);
	printf("%d\n", Max);
	bool flag = 0;
	for (int i = 1; i <= n; ++i)
	   if (a[i] == Max)
	   {
		   	if (flag) printf(" ");
		   	else flag = 1;
	   		printf("%d", i);
	   }	
 	puts("");	
	return 0;
}
