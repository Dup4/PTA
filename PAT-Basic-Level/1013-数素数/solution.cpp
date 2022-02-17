#include<iostream>
#include<string>
#include<map>
#include<cmath>
using namespace std;
#define MAXN 100000
int isprime(int x)
{
	int flag;
	int n,i;
	if(x<=1)
		    flag=0;
	    else if(x==2||x==3)
	        flag=1;
	    else if(x%2==0)
	        flag=0;
	    else{
	    	i=(int)sqrt((double)x);
	    	for(n=3;n<=i;n+=2){
	    		if(x%n==0){
	    			flag=0;
	    			break;
	    	}
	    	    else{
	    	       flag=1;
	        	}
			}
		}
	return flag;
}
int main(){
	int m, n, i;
	map<int, int>q;
	int j=1;
	cin>>m>>n;
	for(i=1; i<=110000; i++){
		if(isprime(i)){
			q[j++]=i;
		}
	}
	j=1;
	for(i=m; i<n; i++){
		if(j%10){
			cout<<q[i]<<" ";
	    }else{
	    	cout<<q[i]<<endl;
		}
		j++;
    }
    cout<<q[i]<<endl;
}