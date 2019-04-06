#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool is_abundant(int num){
    int i=0,integer_root,sum_of_divisor=0;
    for(i=2;i<sqrt(num);++i){
	if(num%i==0){
	    sum_of_divisor+=i;
	    sum_of_divisor+=(num/i);
	}
    }
    integer_root=(int)sqrt(num);
    if(integer_root*integer_root==num){
	sum_of_divisor+=integer_root;
    }
    if(sum_of_divisor>num){
	return true;
    }
    else{
	return false;
    }
}
int main(){
    int Numbers[28124],abundant[7000],count=0,i=0,j=0;
    long int sum=0;
    for(i=0;i<28124;++i){
	Numbers[i]=i;
    }
    for(j=10;j<28124;++j){
	if(is_abundant(j)){
	    abundant[count]=j;
	    ++count;
	}
    }
    for(i=0;i<count;++i){
	for(j=0;j<count;++j){
	    if(abundant[i]+abundant[j]<28124){
		Numbers[abundant[i]+abundant[j]]=0;
	    }
	}
    }
    for(i=0;i<28124;++i){
	sum+=Numbers[i];
    }
    printf("%ld",sum);
    return 0;
}
