#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,stay=0,t,i,total=0;
	cin>>N;
	for(i=0;i<N;i++)
	{
		cin>>t;
		if(t==stay) total+=5;
		else if(t>stay) total+=(t-stay)*6+5;
		else if(t<stay) total+=(stay-t)*4+5;
		stay=t;
	}
	cout<<total<<endl;
}