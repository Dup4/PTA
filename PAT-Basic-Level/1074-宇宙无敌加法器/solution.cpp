#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,s1,s2;
	cin>>s>>s1>>s2;
	int len=s.size(),len1=s1.size(),len2=s2.size(),i,j,k,a[20]={0},b[21]={0},num;
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		a[j]=s[i]-'0';
		if(!a[j]) a[j]=10;
	 } 
	if(len1<len2)
	{
		len=len2-len1;
		for(i=0;i<len;i++) s1.insert(0,"0");
	}
	else if(len1>len2)
	{
		len=len1-len2;
		for(i=0;i<len;i++) s2.insert(0,"0");
	}
	len=max(len1,len2);
	for(i=len-1,j=0;i>=0;i--,j++)
	{
		num=s1[i]+s2[i]-'0'-'0';
		b[j]+=num;
		b[j+1]=b[j]/a[j];
		b[j]%=a[j];
	}
	int flag=1;
	for(i=j;i>=0;i--) if(b[i]) break;
	for(;i>=0;i--) cout<<b[i],flag=0;
	if(flag) cout<<"0";
	cout<<"\n";
	
}