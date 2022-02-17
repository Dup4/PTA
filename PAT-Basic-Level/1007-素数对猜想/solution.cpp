#include<bits/stdc++.h>
using namespace std;
#define MAXN 100000
int isPrime[MAXN];
void getprime(int x) {  
    int i, j, k, n;  
     isPrime[1] = 0; 
    for (i = 2; i <= x; i++) {  
        k = sqrt(i);   
        for (j = 2; j <= k; j++) {  
            if (0 == i % j)   
                break;  
        }  
        if (j > k)  
            isPrime[i] = 1;  
        else  
            isPrime[i] = 0;  
    }  
}  
int main()
{
	int n,i,total=0;
	cin>>n;
	getprime(n);
	if(n>=5)
	for(i=5;i<=n;i++)
	{
		if(isPrime[i]&&isPrime[i-2]&&!isPrime[i-1]) total++;
	}
	cout<<total<<endl;
}