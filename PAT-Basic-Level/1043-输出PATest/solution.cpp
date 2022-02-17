#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i,len=s.size(),n[6]={0},max=0;
	for(i=0;i<len;i++)
	{
		if(s[i]=='P') n[0]++;
		else if(s[i]=='A') n[1]++;
		else if(s[i]=='T') n[2]++;
		else if(s[i]=='e') n[3]++;
		else if(s[i]=='s') n[4]++;
		else if(s[i]=='t') n[5]++;
	}
	for(i=0;i<6;i++)
	{
		if(n[i]>max) max=n[i];
	}
	for(i=0;i<max;i++)
	{
		if(n[0])
		{
			printf("P");
			n[0]--;
		}
		if(n[1])
		{
			printf("A");
			n[1]--;
		}
		if(n[2])
		{
			printf("T");
			n[2]--;
		}
		if(n[3])
		{
			printf("e");
			n[3]--;
		}
		if(n[4])
		{
			printf("s");
			n[4]--;
		}
		if(n[5])
		{
			printf("t");
			n[5]--;
		}
	}
	cout<<"\n";
}