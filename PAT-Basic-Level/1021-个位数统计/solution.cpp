#include<bits/stdc++.h>
using namespace std;
int n[10];
int main()
{
	memset(n,0,sizeof(n));
	string s;
	cin>>s;
	int i,len;
	len=s.size();
	for(i=0;i<len;i++)
	{
		n[s[i]-48]++;
	}
	for(i=0;i<10;i++)
	{
		if(n[i]!=0){
			cout<<i<<":"<<n[i]<<endl;
		}
	}
}