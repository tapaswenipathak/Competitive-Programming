#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string current_str(string);
int main(){
    string str="2";
    for(int i=0;i<999;++i){
	str=current_str(str);
    }
    int sum=0;
    for(int i=0;i<str.length();++i){
	sum+=(str[i]-'0');
    }
    printf("%d",sum);
    return 0;
}
string current_str(string str){
    string result_str="\0";
    int digit=0,calc_val=0,carry=0;
    for(int i=str.length()-1;i>=0;--i){
	digit=str[i]-'0';
	calc_val=digit*2+carry;
	if(calc_val>=10){
	    carry=calc_val/10;
	    calc_val%=10;
	}
	else{
	    carry=0;
	}
	result_str=(char)(calc_val+'0')+result_str;
    }
    if(carry!=0){
	result_str=(char)(carry+'0')+result_str;
    }
    return (result_str);
}
