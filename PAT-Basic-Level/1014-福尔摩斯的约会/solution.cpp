#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1, s2;
	cin>>s1>>s2;
	int week=0, hour=0, minute=0;
	int len1=s1.size(), len2=s2.size(); 
	int len=min(len1, len2), flag1=1, flag2=0;
	for(int i=0; i<len; i++){
		if(s1[i]>=65&&s1[i]<=71&&s1[i]==s2[i]){
			week=s1[i]-'A'+1; 
			break;
			//cout<<week<<endl;
		}
	}
	for(int i=0; i<len; i++){
		if(flag1){
		if(s1[i]==s2[i]){
		    flag1=0;
		    flag2=1;
		    i++;
		}
	    }
		if(flag2){
		if(s1[i]==s2[i]){
			if(s1[i]>='0'&&s1[i]<='9'){
				hour=s1[i]-'0';
			    break;
			}else if(s1[i]>='A'&&s1[i]<='N'){
				hour=s1[i]-55;    //-55
				break; 
			}
		}
	    }
	}
	cin>>s1>>s2;
	len1=s1.size(), len2=s2.size();
	len=min(len1, len2);
	for(int i=0; i<len; i++){
		if(s1[i]==s2[i]){
			if((s1[i]>='a'&&s1[i]<='z')||(s1[i]>=65&&s1[i]<=90)){
			    minute=i;
			    break;
		    }
		}
	}
	switch(week){
		case 1: printf("MON "); break; 
	    case 2: printf("TUE "); break;
	    case 3: printf("WED "); break;
	    case 4: printf("THU "); break;
	    case 5: printf("FRI "); break;
	    case 6: printf("SAT "); break;
	    case 7: printf("SUN "); break;
	}
	printf("%02d:%02d\n", hour, minute);
} 