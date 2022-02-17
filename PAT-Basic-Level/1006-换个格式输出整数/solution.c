#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i;
	int flag1,flag2,flag3;
	flag1=(n/100)%10;
	flag2=(n/10)%10;
	flag3=n%10;
	while(flag1--){
		printf("B");
	}
	while(flag2--){
		printf("S");
	}
	for(i=1;i<=flag3;i++){
		printf("%d",i);
	}
	printf("\n");
}