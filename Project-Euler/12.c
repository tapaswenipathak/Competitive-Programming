#include<stdio.h>
#include<math.h>
int main(){
    long int i,sum=0,j,no_of_divisor=0;
    for(i=1;;++i){
	sum+=i;
	for(j=1;j<=sqrt(sum);++j){
	    if(sum%j==0){
		no_of_divisor+=2;
	    }
	    if(j*j==sum){
		--no_of_divisor;
	    }
	} 
	    if(no_of_divisor>500&&sum!=1){
		goto PRINT;
	    }
	no_of_divisor=0;
    }
PRINT:
    printf("%ld",sum);
    return 0;
}
