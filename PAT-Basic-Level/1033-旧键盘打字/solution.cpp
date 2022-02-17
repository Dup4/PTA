#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	map<char,int>q;
	getline(cin,s1);
	int len=s1.size(),i,flag=0,j;
	for(i=0;i<len;i++)
	{
		if(s1[i]=='+')
		{
			for(j='A';j<='Z';j++) q[j]=2;
		 } 
		else if(s1[i]>='A'&&s1[i]<='Z')
		{
			q[s1[i]]=2;
			q[s1[i]+32]=2;
		}
		else q[s1[i]]=2;
	}
	getline(cin,s1);
	len=s1.size();
	for(i=0;i<len;i++)
	{
		if(q[s1[i]]!=2)
		{
			cout<<s1[i];
			flag=1;
		 } 
	}
	if(!flag) cout<<"\n";
}