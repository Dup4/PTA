#include<bits/stdc++.h>
using namespace std;
#define MAXN 100000
struct pp
{
	int num;
	int a,b,total,level;
}q[MAXN];
int comp(pp x,pp y)
{
	if(x.level<y.level) return 1;
	else if(x.level==y.level)
	{
		if(x.total>y.total) return 1;
		else if(x.total==y.total)
		{
			if(x.a>y.a) return 1; 
			else if(x.a==y.a)
			{
				if(x.num<y.num) return 1;
			}
		}
	}
	return 0;
}
int main()
{
	int n,L,H,a,b,i,j,total,num;
	cin>>n>>L>>H;
	for(i=0,j=0;i<n;i++)
	{
		scanf("%d%d%d",&num,&a,&b);
		//cout<<a<<" "<<b<<endl;
		if(a>=L&&b>=L)
		{
			q[j].num=num,q[j].a=a,q[j].b=b,q[j].total=q[j].a+q[j].b;
			if(a>=H&&b>=H) q[j].level=1;
			else if(a>=H&&b<H) q[j].level=2;
			else if(a>=b&&a<H&&b<H) q[j].level=3;
			else q[j].level=4;
			//cout<<q[j].level<<endl;
			j++;
		}
	}
	total=j;
	sort(q,q+total,comp);
	printf("%d\n",total);
	for(i=0;i<total;i++)
	{
		printf("%d %d %d\n",q[i].num,q[i].a,q[i].b);
		//cout<<q[i].level<<" "<<q[i].total<<endl;
	}
}