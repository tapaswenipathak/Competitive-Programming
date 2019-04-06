#include<stdio.h>
#include<math.h>
 
int getPrimes(long int*,long int);
 
int main()
{
  int i,flag,x,cases,q;
  long int m,n,k,t;
 
  long int primes[3401];
 
  scanf("%d",&cases);
 for(q=0;q<cases;q++)
 {
 
  scanf("%ld%ld",&m,&n);
 
  if(m==2 && n==3)
  printf("%ld\n%ld\n",m,n);
  else if(m==1 && (n==2 || n==3))
  printf("%ld\n",n);
 
  else
  {
  x=getPrimes(primes,n);
  t=sqrt(n);
 
  if(m<t)
 {
  for(i=0;i<x;i++)
  {
      if(primes[i]>=m)
      {
          printf("%ld\n",primes[i]);
      }
  }
 
  k=t;
 }
  else
  k=m;
 
  for(;k<=n;k++)
  {
     if(k%2)
     {
      for(i=0;i<x;i++)
      {
	 flag=1;
	 if(k%primes[i]==0)
	 {
	   flag=0;
	   break;
	 }
      }
      if(flag)
	 {
	  printf("%ld\n",k);
 
	 }
 
     k++;
    }
 
  }
 
 
  }
 
  printf("\n");
 
 }
 
  return 0;
 
}
 
int getPrimes(long int* p,long int b)
{
    int r,s;
    int j,x=0,i,flag;
    r=sqrt(b);
 
    if(r>=2)
    {
        p[0]=2;
        x++;
    }
    if(r>=3)
    {
     p[1]=3;
     x++;
    }
    if(r>=5)
    {
        p[2]=5;
        x++;
    }
    if(r>=7)
    {
        p[3]=7;
        x++;
    }
 
    for(j=9;j<r;j++)
    {
	if(j%2)
	{
	   s=sqrt(j);
	   if((s*s)!=j)
	    {
	     for(i=3;i<=s;i+=2)
	       {
		  flag=1;
		  if(j%i==0)
		  {
		   flag=0;
		   break;
		  }
 
	      }
 
	     if(flag)
	     {
	       p[x]=j;
	       x++;
	     }
 
	  }
 
	j++;
      }
 
    }
 
  return x;
 
}

