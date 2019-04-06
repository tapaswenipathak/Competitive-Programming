#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isprime(unsigned long long int);
int main(){
   unsigned long long int sum=5,i;
    for(i=4;i<=2000000;++i){
	if(isprime(i)){
	    sum+=i;
	}
	else{
	    continue;
	}
    }
    printf("%llud",sum);
    return 0;
}
bool isprime(unsigned long long int num){
   unsigned long long int j;
    for(j=2;j<=sqrt(num);++j){
	if(num%j==0){
	    return (false);
	}
    }
    return true;
}
