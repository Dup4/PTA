#include<bits/stdc++.h>
using namespace std;
#define MAXN 50000
string a[MAXN],b[MAXN];
int comp(string x,string y)
{
	return x<y;
}
int main()
{
	map<string,string>p;
	map<string,int>q;
	int N,i,j,k,t;
	cin>>N;
	string s1,s2;
	for(i=0;i<N;i++)
	{
		cin>>s1>>s2;
		p[s1]=s2;
		p[s2]=s1;
		q[s1]=1;
		q[s2]=1;
	}
	cin>>t;
	for(i=0,j=0,k=0;i<t;i++)
	{
		cin>>s1;
		if(q[s1])
		{
			q[s1]=2;
			b[k++]=s1;
		}
		else a[j++]=s1;
	}
	for(i=0;i<k;i++)
	{
		if(q[p[b[i]]]!=2)	a[j++]=b[i];
	}
	sort(a,a+j,comp);
	cout<<j<<endl;
	if(j)
	{
		cout<<a[0];
		for(i=1;i<j;i++) cout<<" "<<a[i];
		cout<<endl;
	}
}