
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cctype>

#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define st(n,m)			            scanf("%d %d",n,m);
#define slt(n,m)		            scanf("%lld %lld",n,m)

#define p(n)			            printf("%d\n",n)
#define pl(n)			            printf("%lld\n",n)
#define pt(n,m)			            printf("%d %d",n,m)

#define forall(i,a,b)               for(int i=a;i<b;++i)
#define foreach(i,a,b)		        for(int i=a;i<=b;++i)

#define maX(a,b)                    ( (a) > (b) ? (a) : (b))
#define miN(a,b)                    ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)               ( (n >> b) & 1)

using namespace std;

int main()
{
    int N, maxlen = 0, len = 0;
    s (N);
    int A[N];
    forall (i,0,N){
        s (A[i]);
    }
    forall (i,0,N){
        if (A[i]){
            ++len;
            if (maxlen < len){
                maxlen = len;
            }
        }
        else if (!A[i]){
            len = 0;
        }
    }
    p(maxlen);
    return 0;
}
