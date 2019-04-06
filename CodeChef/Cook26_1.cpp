#include<stdio.h>
unsigned long long int a[10005];
int main()
{
unsigned long long int T;
int i;
scanf("%d",&T);
 while(T--)
 {
   int N;
   scanf("%d",&N);
   unsigned long long int Result=1; 
   for(i=0;i<N;i++){
  scanf("%d",&a[i]);
} 
   for( i=1;i<N;i++){
        if(a[i]<a[i-1]){
   ++Result;
}
   }  
   printf("%lld\n",Result);
}
system("pause");
return 0;
   }
