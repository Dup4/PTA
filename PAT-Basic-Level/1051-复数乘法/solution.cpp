#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d,r,p;
	cin>>a>>b>>c>>d;
	r=a*c,p=b+d;
	a=r*cos(p),b=r*sin(p);
	if(a>-0.005&&a<0) a+=0.005;
	if(b>-0.005&&b<0) b+=0.005;
	if(a&&b) printf("%.2lf%+.2lfi\n",a,b);
	else if(b) printf("%.2lfi\n",b);
	else if(a) printf("%.2lf\n",a);
}