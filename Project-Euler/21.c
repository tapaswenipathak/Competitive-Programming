#include<stdio.h>
#include<stdlib.h>
#include<math.h>
long int divisor_sum(int);
int main(){
    int a,i;
    long int sum=0,b=0;
    for(i=2;i<10000;++i){
	a=i;
	b=divisor_sum(a);
	if((b>a)&&(a==divisor_sum(b))){
	    sum+=a+b;
	}
    }
    printf("%ld",sum);
    return 0;
}
long int divisor_sum(int num){
    int i;
    int sqrt_num=(int)sqrt(num);
    long sum=1;
    if(sqrt_num*sqrt_num==num){
	sum+=sqrt_num;
	--sqrt_num;
    }
    for(i=2;i<=sqrt_num;++i){
	if(num%i==0){
	    sum=sum+i+(num/i);
	}
    }
    return sum;
}
