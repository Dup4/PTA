#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,win=0,def=0,ave=0,max[2][3]={0},flag1,flag2,max1=-1,max2=-1;
	char a,b;
	string s="BCJ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf(" %c %c",&a,&b);
		if((a=='C'&&b=='J')||(a=='J'&&b=='B')||(a=='B'&&b=='C'))
		{
		 win++;
		 for(j=0;j<3;j++) if(a==s[j]) max[0][j]++;
	    }
		else if(a==b) ave++;
		else
		{
			def++;
			for(j=0;j<3;j++) if(b==s[j]) max[1][j]++;
		} 
	}
	printf("%d %d %d\n",win,ave,def);
	printf("%d %d %d\n",def,ave,win);
	for(i=0;i<3;i++)                                                                                                                                                                                                                              
	{
		if(max[0][i]>max1)
		{
			max1=max[0][i];
			flag1=i;
		}
		if(max[1][i]>max2)
		{
			max2=max[1][i];
			flag2=i;
		}
	}
	cout<<s[flag1]<<" "<<s[flag2]<<endl;
}