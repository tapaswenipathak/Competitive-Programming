#include<stdio.h>
int main(){
    int a,b,c;
    for(a=0;a<1000;++a){
	for(b=a+1;b<1000;++b){
	    c=1000-a-b;
	    if(c>0&&a*a+b*b==c*c){
		printf("%d",a*b*c);
		printf("%d %d %d",a,b,c);
	    }
	}
    }
    return 0;
}
