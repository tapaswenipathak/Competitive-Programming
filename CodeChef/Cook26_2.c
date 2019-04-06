#include<stdio.h>
 
int main() {
  long Min,Res,N,Val,i;
  int T;
  scanf("%d",&T);
  while(T--) {
  scanf("%ld",&N);
  Res=1;
  scanf("%ld",&Val);
  Min=Val;
   for(i=1;i<N;i++) {
           scanf("%ld",&Val);
           if(Val<Min) {
           ++Res;
           Min=Val;  
           } 
  }
   printf("%d\n",Res);
             
  }
  system("pause");  
  return 0;
  
}
