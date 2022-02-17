#include<bits/stdc++.h>
using namespace std;
#define MAXN 100
int ans[MAXN],soc[MAXN],a[MAXN][MAXN];
int main()
{
	int n,m;
	cin>>n>>m;
	int i,j;
	for(i=0;i<m;i++)
	{
		cin>>soc[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>ans[i];
	}
	for(i=0;i<n;i++)
	{
		int total=0;
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]==ans[j]) total+=soc[j];
		}
		cout<<total<<endl;
	}
	
 } 