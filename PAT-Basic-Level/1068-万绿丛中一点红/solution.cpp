#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000
int a[MAXN][MAXN];
int tran(int x1,int y1,int x2,int y2)
{
	return abs(a[x1][y1]-a[x2][y2]);
}
int main()
{
	int m,n,i,j,tol,num,x,y,color,total=0,flag;
	map<int,int>q;
	cin>>m>>n>>tol;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			q[a[i][j]]++;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			flag=1;
			if(i)
			{
				if(tran(i,j,i-1,j)<=tol) flag=0;
				if(j)
				{
					if(tran(i,j,i-1,j-1)<=tol) flag=0;
				}
				if(m-j-1)
				{
					if(tran(i,j,i-1,j+1)<=tol) flag=0;
				}
			}
			if(j)
			{
				if(tran(i,j,i,j-1)<=tol) flag=0;
			}
			if(n-i-1)
			{
				if(tran(i,j,i+1,j)<=tol) flag=0;
				if(j)
				{
					if(tran(i,j,i+1,j-1)<=tol) flag=0;
				}
				if(m-j-1)
				{
					if(tran(i,j,i+1,j+1)<=tol) flag=0;
				}
			}
			if(m-j-1)
			{
				if(tran(i,j,i,j+1)<=tol) flag=0;
			}
			if(flag&&q[a[i][j]]==1) total++,x=j+1,y=i+1,color=a[i][j];
		}
	}
	if(total>1) cout<<"Not Unique";
	else if(total) printf("(%d, %d): %d",x,y,color);
	else cout<<"Not Exist";
	cout<<"\n";
}