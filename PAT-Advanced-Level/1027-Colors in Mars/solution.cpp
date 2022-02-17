#include<bits/stdc++.h>
using namespace std;
string tran(int x)
{
	int a,b;
	a=x%13;
	x/=13;
	b=x%13;
	string s="";
	if(b<=9) s+=b+'0';
	else s+='A'+b-10;
	if(a<=9) s+=a+'0';
	else s+='A'+a-10;
	return s;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"#"<<tran(a)<<tran(b)<<tran(c)<<endl;
}