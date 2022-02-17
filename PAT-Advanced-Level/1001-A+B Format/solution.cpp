#include<bits/stdc++.h>
using namespace std;
void tran(int x)
{
	string s1="",s2="";
	int i,j,flag=0;
	if(x)
	{
	if(x<0) flag=1,x*=-1;
	while(x)
	{
		s1+=x%10+'0';
		x/=10;
	}
	int len1=s1.size();
	if(len1>=4)
	{
		for(i=0;i<len1;i++)
		{
			if(i%3==0&&i) s2+=",";
			s2+=s1[i];
		}
	}
	else s2=s1;
	if(flag) cout<<"-";
	int len2=s2.size();
	for(i=len2-1;i>=0;i--) cout<<s2[i];
    }
    else cout<<"0";
    cout<<"\n";
}
int main()
{
	int a,b;
	cin>>a>>b;
	a+=b;
	tran(a);
}