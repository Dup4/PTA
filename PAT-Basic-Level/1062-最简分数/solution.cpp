#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000
int gcd(int x,int y)
{
	int r;
	while(1)
	{
		r=x%y;
		if(!r) break;
		x=y;
		y=r;
	}
	return y;
}
int main()
{
	int a,b,c,d,k;
	scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&k);
	double n,m,p;
	n=(double)a/b,m=(double)c/d;
	if(n>m) swap(n,m);
	int i,flag=0;
	for(i=1;i<=k;i++)
	{
		p=(double)i/k;
		if(p>n&&p<m&&gcd(i,k)==1)
		{
		if(flag) printf(" %d/%d",i,k);
		else
		{
			flag=1;
			printf("%d/%d",i,k);
		}
	    }
	}
	cout<<endl;
}