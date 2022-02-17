#include<bits/stdc++.h>
using namespace std;
#define MAXN 10000
map<int,int>a;
int main()
{
	int n1;
	cin>>n1;
	int i,j;
	string s;
	int count=0;
	for(i=0;i<n1;i++)
	{
		cin>>s;
		int len=s.size(),total=0;
		for(j=0;j<len;j++)
		{
			total+=(s[j]-48);
		}
		if(a[total]==1) continue;
		else
		{
			a[total]=1;
			count++;
		}
	}
	cout<<count<<endl;
	map<int,int>::iterator it;
	it=a.begin();
	cout<<it->first;
	for(it++;it!=a.end();it++) cout<<" "<<it->first;
	cout<<endl;
}