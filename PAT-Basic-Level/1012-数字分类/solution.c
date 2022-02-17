#include<stdio.h>
#include<limits.h>
int main(){
	int total1=0,total2=0;
	double total4=0;
	int count1=0,count2=0,count3=0,count4=0,count5=0;
	int n;
	int max=INT_MIN;
	scanf("%d",&n);
	int num[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
		if(num[i]%10==0){
			count1++;
			total1+=num[i];
		}
		else if(num[i]%5==1){
			count2++;
			if(count2%2) total2+=num[i];
			else total2-=num[i];
		}
		else if(num[i]%5==2) count3++;
		else if(num[i]%5==3){
			count4++;
			total4+=num[i];
		}
		else if(num[i]%5==4){
			count5++;
			if(num[i]>max) max=num[i];
		}
	} 
	if(count1) printf("%d",total1);
	else printf("N");
	if(count2) printf(" %d",total2);
	else printf(" N");
	if(count3) printf(" %d",count3);
	else printf(" N");
	if(count4) printf(" %.1f",total4/count4);
	else printf(" N");
	if(count5) printf(" %d",max);
	else printf(" N");
	printf("\n");
}