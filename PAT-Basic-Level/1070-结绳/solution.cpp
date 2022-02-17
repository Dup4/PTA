#include<bits/stdc++.h>
using namespace std;
#define maxn 10000
double a[maxn];
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++) scanf("%lf",&a[i]);
	sort(a,a+i);
	double total=a[0];
	for(i=1;i<n;i++) total=(a[i]/2)+(total/2);
	int num=floor(total);
	printf("%d\n",num);
}