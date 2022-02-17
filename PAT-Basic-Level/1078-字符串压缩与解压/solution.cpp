#include<iostream>
#include<cmath>
using namespace std;
int tran(string s)
{
	int i,len=s.size(),j=pow(10,len-1),num=0;
	for(i=0;i<len;i++,j/=10) num+=(s[i]-'0')*j;
	return num;
}
string tran1(int x)
{
	string s="",s1;
	if(x)
	{
		while(x)
		{
			s1=x%10+'0';
			s+=s1;
			x/=10;
		}
	}
	else s="0";
	return s;
}
int main(){
	string s,s1;
	char c;
	int len;
	cin>>c;
	getchar();
	getline(cin, s);
	len=s.size();
	int i, j=0, k, n=0, num=0, a;
	if(c=='C'){
		s1="";
		for(i=len-1; i>=0; i-=num){
			s1+=s[i];
			num=1;
			if(s[i-1]==s[i]&&i){
				for(j=i-1; j>=0; j--){
					if(s[j]==s[i]){
					    num++;	
					}else{
						break;
					}
				}
			    s1+=tran1(num);
			}
		}
		len=s1.size();
		for(k=len-1; k>=0; k--){
		cout<<s1[k];
	}
	cout<<endl;
	}else if(c=='D'){
		for(i=0; i<len; i++){
			if(s[i]>=48&&s[i]<=57){
				s1="";
				for(k=i;k<len;k++){
					if(s[k]>=48&&s[k]<=57) s1+=s[k];
					else break;
				}
				i=k,a=tran(s1);
				for(j=1; j<a; j++){
					cout<<s[i];
				}	
				i--;
			}else{
				cout<<s[i];
			}
		}
		cout<<endl;
	}	
}