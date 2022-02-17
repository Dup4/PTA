#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000
int n[MAXN]; 
int main()
{
	string s;
	int a,num;
	cin>>s>>a;
	int len=s.size(),i,j=0;
	if(len>1)
	{
	num=s[0]-'0';
	if(num/a) n[j++]=num/a;
	num%=a;
	num*=10;
	for(i=1;i<len;i++)
	{
		num+=s[i]-'0';
		n[j++]=num/a;
		num%=a;
		num*=10;
	}
	for(i=0;i<j;i++) printf("%d",n[i]);
	printf(" %d\n",num/10);
    }
    else
    {
    	printf("%d %d\n",(s[0]-'0')/a,(s[0]-'0')%a);
	}
}