#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string current_evaluation(string,int);
int main(){
    long sum=0,i;
    string factorial="1";
    for(i=1;i<=16;++i){
	factorial=current_evaluation(factorial,i);
    }
    //cout<<"\n"<<factorial;
    for(i=0;i<factorial.length();++i){
	sum+=(factorial[i]-'0');
    }
    printf("%ld",sum);
    return 0;
}
string current_evaluation(string tempfact,int multiplier){
    string temp_result="\0";
    int digit,calc_val,carry=0,i;
    for(i=tempfact.length()-1;i>=0;--i){
	digit=tempfact[i]-'0';
	calc_val=digit*multiplier+carry;
	if(calc_val>=10){
	    carry=calc_val/10;
	    calc_val%=10;
	}
	else{
	    carry=0;
	}
	temp_result=(char)(calc_val+'0')+temp_result;
    }
    if(carry!=0){
	temp_result=(char)(carry+'0')+temp_result;
    }
    cout<<"\n"<<temp_result;
return(temp_result);
}

