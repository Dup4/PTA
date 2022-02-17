#include<bits/stdc++.h>
using namespace std;
#define MAXN 10000
struct pp
{
	string s;
	int n;
}q[MAXN],p[MAXN];
int comp(pp x,pp y)
{
	if(x.n!=y.n) return x.n>y.n;
	else return x.s<y.s;
}
void lists(int a[], int x)
{
	memset(a,0,sizeof(a));
	int i, j, k, l;
	l = x / 2 + 1;
	for (i = l-1, j = l, k = 0; k < x; k++)
	{
		if (k % 2 == 1 || k == 0)
		{
			a[i] = k;
			i--;
		}
		else
		{
			a[j] = k;
			j++;
		}
	}
}
int a[MAXN];
int main()
{
	int N,K,n,m;
	int i,j,k,l;
	string s="";
	cin>>N>>K;
	n=floor(N/K);
	m=N+n-n*K;
	for(i=0;i<N;i++) cin>>q[i].s>>q[i].n;
	sort(q,q+N,comp);
	lists(a,m);
	for(i=0;i<m;i++) p[i]=q[i];
	for(i=0;i<m;i++) s+=p[a[i]].s,s+=" ";
	s.erase(s.size()-1,1);
	cout<<s<<endl;
	s.clear();
	lists(a,n);
	for(;i<N;i+=n)
	{
		for(j=i,k=0;k<n;j++,k++) p[k]=q[j];
		for(j=0;j<n;j++) s+=p[a[j]].s,s+=" ";
		s.erase(s.size()-1,1);
		cout<<s<<endl;
		s.clear();
	}
}















