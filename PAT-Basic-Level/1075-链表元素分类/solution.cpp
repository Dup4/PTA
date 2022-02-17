#include<bits/stdc++.h>
using namespace std;
#define maxn 100000
struct node
{
	int add,data,next,level;
}temp,total[maxn];
typedef vector<node> no;
void print(node x)
{
	printf("%05d %d %05d\n",x.add,x.data,x.next);
}
void print1(node x)
{
	printf("%05d %d -1\n",x.add,x.data);
}
int main()
{
	int first,N,K,len;
	cin>>first>>N>>K;
	int i,j,k;
	map<int,node>vin;
	no zero,one,two;
	for(i=0;i<N;i++)
	{
		scanf("%d%d%d",&temp.add,&temp.data,&temp.next);
		if(temp.data<0) temp.level=0;
		else if(temp.data<=K) temp.level=1;
		else temp.level=2;
		vin[temp.add]=temp;
	}
	int addnext=first;
	if(first==-1) cout<<"-1\n";
	else
	{
	for(;addnext!=-1;addnext=vin[addnext].next)
	{
		if(vin[addnext].level==0) zero.push_back(vin[addnext]);
		else if(vin[addnext].level==1) one.push_back(vin[addnext]);
		else two.push_back(vin[addnext]);
	}
	for(len=zero.size(),i=0,j=0;i<len;i++) total[j++]=zero[i];
	for(len=one.size(),i=0;i<len;i++) total[j++]=one[i];
	for(len=two.size(),i=0;i<len;i++) total[j++]=two[i];
	for(i=0;i<j-1;i++)
	{
		total[i].next=total[i+1].add;
		print(total[i]);
	} 
	print1(total[i]);
    }
}










