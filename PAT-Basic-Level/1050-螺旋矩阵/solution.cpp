#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
int comp(const void *p,const void *q);
int main(){
		int n,x,y;
		scanf("%d",&n);
		int num[n];
		int i,j;
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		qsort(num,n,sizeof(int),comp);
		int M,N;
		int flag1=0,flag2=0;
		int min=INT_MAX;
		for(M=1;M<=n;M++){
			for(N=1;N<=n;N++){
				if(M*N==n&&M-N<min&&M>=N){
				min=M-N;
				flag1=M;
				flag2=N;
			  }
			}
		}
		//printf("%d %d\n",flag1,flag2);
		int num2[flag1][flag2];
		memset(num2,0,sizeof(num2));
		num2[x=0][y=0]=num[0];
		int tot=1;
		while(tot<n){
			while(y+1<flag2&&!num2[x][y+1]) num2[x][++y]=num[tot++]; //向右 
			while(y-1>=0&&!num2[x][y-1]) num2[x][--y]=num[tot++];    //向左 
			while(x-1>=0&&!num2[x-1][y]) num2[--x][y]=num[tot++];    //左上 
			while(x+1<flag1&&!num2[x+1][y]) num2[++x][y]=num[tot++]; //右下 
		}
		for(i=0;i<flag1;i++){
			for(j=0;j<flag2;j++){
				if(j) printf(" %d",num2[i][j]);
				else printf("%d",num2[i][j]);
			}
			printf("\n");
		}
} 
int comp(const void *p,const void *q){
	return (*(int *)q-*(int *)p);
}