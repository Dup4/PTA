#include<bits/stdc++.h>
using namespace std;
#define MAXN 1000
struct pp
{
	string s1,s2;
}a[MAXN];
int main()
{
	int n,i,j,total=0,len,flag;
	cin>>n;
	string s1,s2;
	map<char,char>q;
	q['1']='@',q['0']='%',q['l']='L',q['O']='o';
	for(i=0;i<n;i++)
	{
		flag=0;
	    cin>>s1>>s2;
	    len=s2.size();
	    for(j=0;j<len;j++)
	    {
	    	if(s2[j]=='1'||s2[j]=='0'||s2[j]=='l'||s2[j]=='O')
	    	{
	    		flag=1;
	    		s2[j]=q[s2[j]];
			}
		}
		if(flag)
		{
			a[total].s1=s1,a[total].s2=s2;
			total++;
		 } 
	}
	if(total)
	{
	cout<<total<<endl;
	for(i=0;i<total;i++) cout<<a[i].s1<<" "<<a[i].s2<<endl;
    }
    else if(n==1) printf("There is 1 account and no account is modified\n");
    else if(n>1) printf("There are %d accounts and no account is modified\n",n);
}