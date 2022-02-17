#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t, l, i, flag, a, b, c, d;
	char n[101];
	cin>>t;
	while(t--){
		a=b=c=d=0;
		flag=1;
		scanf("%s", n);
		l=strlen(n);
		for(i=0; i<l; i++){
			if(n[i]!='P'&&n[i]!='A'&&n[i]!='T'){
				flag=0;
			}
			//cout<<flag<<endl;
			if(n[i]=='P'){
				a=i;
				c++;
			}else if(n[i]=='T'){
				b=i;
				d++;
			}
		}
		if(c>1||d>1){
			flag=0;
		}
		if((b-a-1)==1){
			if(a!=(l-b-1)){
				flag=0;
			}
		}else if((b-a-1)==2){
			if(2*a!=(l-b-1)){
				flag=0;
			}
		}else{
			flag=0;
		}
		if(flag){
			cout<<"YES"<<endl; 
		}else{
			cout<<"NO"<<endl;
		}
	}
} 