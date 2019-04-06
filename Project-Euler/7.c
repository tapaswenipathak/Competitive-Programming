#include<stdio.h>
int main(void)
{
int i,k=2;
int j;
int count=0;
int n=1000000;
//int prime[2000000]={};
int *prime;
prime = malloc(2000000 * sizeof(int));


for(i=0;i<n;i++) // initializes the prime number array
{
prime[i]=i;
}
for(i=2;i<n;i++) // Implementation of the Sieve
{
    if(prime[i]!=0)
    {   
    for(j=2;j<n;j++)
    {
        {
            prime[j*prime[i]]=0;
            if(prime[i]*j>n)
            break;  
        }
    }
    }
}
for(i=0;i<n;i++) {// Prints the prime numbers
if(prime[i]!=0)
{
               ++count;
               if(count==10002)
printf("%d\n",prime[i]);
}
}
free(prime);
system("pause");
return(0);
}
