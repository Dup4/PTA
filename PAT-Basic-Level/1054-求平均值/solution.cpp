#include<bits/stdc++.h>
using namespace std;
int jude(string s)
{
	int i,len=s.size(),flag=0;
	if(s[0]=='-') i=1;
	else i=0;
	for(;i<len;i++)
	{
		if((s[i]>='0'&&s[i]<='9'))
		{
			continue;
		}
		else if(s[i]=='.')
		{
			if(len-i-1>2||flag) return 0;
			else flag=1;
		}
		else return 0;
	}
	if(flag) return 2;
	else return 1;
}
double tran(string s)
{
	while(s[0]=='0') s.erase(0,1);
	int i,len=s.size(),j=pow(10,len-1);
	double num=0;
	for(i=0;i<len;i++,j/=10)
	{
		num+=(s[i]-'0')*j;
	}
	return num;
}
double change(string s,int x)
{
	int flag=0;
	if(s[0]=='-')
		{
			s.erase(0,1);
			flag=1;
		 } 
	int len=s.size(),i,j;
	double num=0;
	string s1="";
	if(x==1) num+=tran(s);
	else if(x==2)
	{
		for(i=0;s[i]!='.';i++)	s1+=s[i];
		num+=tran(s1);
		s1="";
		for(i++,j=0;i<len;i++,j++) s1+=s[i];
		num+=(tran(s1)*pow(0.1,j));
	}
	if(flag) num*=-1;
	return num;
}
int main()
{
	int n,i,j,total=0,flag;
	string s;
	cin>>n;
	double tot=0;
	for(i=0;i<n;i++)
	{
		double num;
		flag=1;
		cin>>s;
		if(jude(s))
		{
			num=change(s,jude(s));
			//cout<<num<<endl;
			if(num<=1000&&num>=-1000) total++,tot+=num,flag=0;
		}
		if(flag) cout<<"ERROR: "<<s<<" is not a legal number\n";
	}
	if(total>1) printf("The average of %d numbers is %.2lf",total,tot/total);
	else if(total==1) printf("The average of 1 number is %.2lf",tot);
	else cout<<"The average of 0 numbers is Undefined";
}