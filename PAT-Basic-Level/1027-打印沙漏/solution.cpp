#include<bits/stdc++.h>
using namespace std;
int a[23]={1,7,17,31,49,71,97,127,161,199,241,287,337,391,449,511,577,647,721,799,881,967,1057},
b[22]={3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45};
int main()
{
	int n,i,j,flag,k;
	char c;
	cin>>n>>c;
	for(i=0;i<23;i++) if(n<a[i]) break;
	flag=i-1;
	//cout<<flag<<endl;
	for(i=0,j=flag-1;i<flag;i++,j--)
	{
		for(k=0;k<i;k++) printf(" ");
		for(k=0;k<b[j];k++) printf("%c",c);
		printf("\n");
	}
	for(i=0;i<flag;i++) printf(" ");
	printf("%c\n",c);
	for(i=0,j=flag-1;i<flag;i++,j--)
	{
		for(k=0;k<j;k++) printf(" ");
		for(k=0;k<b[i];k++) printf("%c",c);
		printf("\n");
	}
	cout<<n-a[flag]<<endl;
}