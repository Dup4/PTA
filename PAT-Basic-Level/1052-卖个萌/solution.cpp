#include<bits/stdc++.h>
using namespace std;
struct pp
{
	string s[10];
}q[3];
int main()
{
	string s;
	int i,j,k,l,len,tot[3]={0};
	for(i=0;i<3;i++)
	{
		getline(cin,s);
		//cout<<s<<endl;
		len=s.size();
		for(j=0,l=0;j<len;j++)
		{
			if(s[j]=='[')
			{
				//cout<<j<<endl;
				for(k=j+1;s[k]!=']';k++)
				{
					q[i].s[l]+=s[k];
				}
				//cout<<q[i].s[l]<<endl;
				l++;
				j=k;
			}
		}
		tot[i]=l;
		//cout<<l<<endl;
	}
	int t;
	cin>>t;
	while(t--)
	{
		s="";
		int n[5],flag=1,a[5]={0,1,2,1,0};
		for(i=0;i<5;i++) cin>>n[i];
		for(i=0;i<5;i++)
		{
			n[i]--;
			if(n[i]>tot[a[i]]-1||n[i]<0)
			{
				flag=0;
				//cout<<"1\n";
				break;
			}
			else
			{
				s+=q[a[i]].s[n[i]];
			}
			if(!i) s+="(";
			else if(i==3) s+=")";
		}
		if(flag) cout<<s<<endl;
		else cout<<"Are you kidding me? @\\/@\n";
	}
}