#include <stdio.h>
 
long long power(int a);
 
int main()
{
    int i;
    long long ans=0;
     
    for(i=1; i<=1000; i++)
    {
        ans=(ans+power(i))%10000000000000;
    }
     
    ans=(ans%10000000000);
     
    printf("%lld\n",ans);
     
    return 0;
}
 
long long power(int a)
{
    int i;
    long long ans=1;
     
    for(i=1; i<=a; i++)
    {
        ans*=a;
        ans=ans%10000000000000;
    }
     
    return ans;
}
