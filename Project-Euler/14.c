#include<stdio.h>
int main(){
    unsigned long long int i=2,num,result_num=0;
    int chain_count=0,max_chain_count=0;
    for(i=2;i<1000000;++i){
	chain_count=0;
	num=i;
	while(num!=1&&num>1){
	    if(num%2==0){
		num=num/2;
		++chain_count;
	    }
	    else{
		num=3*num+1;
		++chain_count;
	    }
	}
	if(chain_count>max_chain_count){
	    max_chain_count=chain_count;
	    result_num=i;
	}
    }
printf("%llud",result_num);
    return 0;
}
