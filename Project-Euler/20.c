#include<stdio.h>
#define MAXSIZE 300
int main(){
    int ar[MAXSIZE];
    ar[0]=1;
    int m=1,carry=0,i,j,k,sum=0,x;
    for(i=1;i<=100;++i){
	for(j=0;j<m;++j){
	    x=ar[j]*i+carry;
	    ar[j]=x%10;
	    carry=x/10;
	}
	while(carry>0){
	    ar[m]=carry%10;
	    carry/=10;
	    ++m;
	}
	}
    for(i=0;i<m;++i){
	sum+=ar[i];
    }
    printf("%d",sum);
    return 0;
}
