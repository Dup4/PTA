#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	int i=1;
	while(t--){
		long long a,b,c;
		int flag=0;
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a+b>c) flag=1;
		if(flag) printf("Case #%d: true\n",i);
		else printf("Case #%d: false\n",i);
		i++;
	}
}