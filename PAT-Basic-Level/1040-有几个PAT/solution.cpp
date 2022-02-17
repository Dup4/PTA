#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	long long i,len=s.size(),tot1=0,tot2=0,total=0;
	for(i=len-1;i>=0;i--)
	{
		if(s[i]=='T') tot1++;
		else if(s[i]=='A') tot2+=tot1;
		else total+=tot2;
		total%=1000000007;
	}
	cout<<total<<endl;
}