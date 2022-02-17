#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    int n, d, a, i, j=0, k=0, c;
    double e, list[1000], p, q;
    map<int, int>map;
    cin>>n>>e>>d;
    for(i=0; i<n; i++){
    	cin>>a;
    	c=0;
    	for(j=0; j<a; j++){
    		cin>>list[j];
    		if(list[j]<e){
    			c++;
			}
		}
		if(c*2>a){
			map[i]++;
		if(a>d){
			map[i]++;
		}
	}
	}
	j=0, k=0;
	for(i=0; i<n; i++){
	    if(map[i]==1){
	        j++; 	
		}else if(map[i]==2){
	        k++; 	
		}
	}
	p=1.0*j/n;
    q=1.0*k/n;
	printf("%.1f", 100*p);
	cout<<"% ";
	printf("%.1f%\n", 100*q);
} 