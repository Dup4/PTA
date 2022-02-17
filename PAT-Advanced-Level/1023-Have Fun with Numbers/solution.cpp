#include<bits/stdc++.h>
using namespace std;
string time(string s)
{
	int i,len=s.size(),num=0;
	string s1;
	for(i=len-1;i>=0;i--)
	{
		num+=(s[i]-'0')*2;
		s1+=num%10+'0';
		num/=10;
	}
	if(num) s1+=num+'0';
	return s1;
}
int main()
{
	string s,s1;
	cin>>s;
	s1=time(s);
	int len1=s1.size(),i,ans[10]={0},len=s.size();
	for(i=0;i<len;i++) ans[s[i]-'0']++;
	for(i=0;i<len;i++) ans[s1[i]-'0']--;
	for(i=0;i<10;i++)
	{
		if(ans[i])
		{
			cout<<"No\n";
			goto a;
		}
	 } 
	cout<<"Yes\n";
	a:
	for(i=len1-1;i>=0;i--) cout<<s1[i];
	cout<<endl;
}