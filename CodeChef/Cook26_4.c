#include<stdio.h>
#include<ctype.h>
#include<iostream>
using namespace std;
#define MOD 1000000007
#define TRUE 1
#define FALSE 0

int readInput()
{
    unsigned int acc = 0;
   register char buf;
    buf = getchar_unlocked();
   while(buf!=10&&buf<='9'&&buf>='0'){
acc = acc * 10 + buf - '0';
buf = getchar_unlocked();
}

return(acc);
}
 
int main()
{
    int T,N,tot,i,j,found,a,curr;
    long long Temp;
    int Res[5000000];
    int PrimeNos[5000000]={FALSE};
    for(i=2;i<=5000000;++i){
        if(!PrimeNos[i-1]){
            a = i<<1;
            while(a<=5000000){
                PrimeNos[a] = TRUE;
                a+=i;
            }
        }
    }
    
    Res[0] = 1;
    Res[1] = 2;
    curr = 2;
    for(i=3;i<=5000000;++i){
        if(!PrimeNos[i]){
            ++curr;
        }
        Temp = Res[i-2];
        Temp = (Temp*curr) %MOD;
        Res[i-1] = Temp;
    }
   T=read();
    while(T--){
       N=readInput();
        printf("%d\n",Res[N-1]);
    }
    system("pause");
    return 0;
}
