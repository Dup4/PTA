/*#include<bits/stdc++.h>
using namespace std;
map<int,int>q;
int cmp(const pair<int, int>&x,  const pair<int, int>&y)    
{    
    return x.second > y.second;    
}    
int main()
{
	int t;
	cin>>t;
	int i;
	int a,b;	
	for(i=0;i<t;i++)
	{
		cin>>a>>b;
		q[a]+=b;
	}
	vector<int, int>v;
	for(auto it=q.begin();it!=q.end();it++)
	  q.push_back(make_pair(it->first,it->second));
	sort(q.begin(),q.end(),cmp);
	map<int,int>::iterator it;
	it=q.begin();
	cout<<it->first<<" "<<it->second<<endl;
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int i,a,b;
	map<int,int>q;
	for(i=0;i<t;i++)
	{
		cin>>a>>b;
		q[a]+=b;
	}
	map<int,int>::iterator it,max;
	it=max=q.begin();
	for(it++;it!=q.end();it++)
	{
		if(it->second>max->second) max=it;
	}
	cout<<max->first<<" "<<max->second<<endl;
}


