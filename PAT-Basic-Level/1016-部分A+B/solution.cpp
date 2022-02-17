#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,tot1=0,tot2=0,i,j,len;
	string s1,s2;
	cin>>s1>>a>>s2>>b;
	//cout<<s1<<endl<<a<<endl<<s2<<endl<<b<<endl;
	len=s1.size();
	for(i=0,j=1;i<len;i++)
	{
		if(s1[i]-'0'==a)
		{
			tot1+=a*j,j*=10;
			//cout<<tot1<<endl;
		}
	}
	//cout<<tot1<<endl;
	len=s2.size();
	for(i=0,j=1;i<len;i++)
	{
		if(s2[i]-'0'==b)
		{
			tot2+=b*j,j*=10;
		}
	}
	//cout<<tot2<<endl;
	cout<<tot1+tot2<<endl;
}