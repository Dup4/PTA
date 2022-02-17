#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int>q;
	int a,b,c;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf("%d-%d %d",&a,&b,&c);
		q[a]+=c;
	}
	int flag,max=0;
	map<int,int>::iterator it;
	for(it=q.begin();it!=q.end();it++)
	{
		if(it->second>max)
		{
			max=it->second;
			flag=it->first;
		}
	}
	cout<<flag<<" "<<max<<endl; 
}