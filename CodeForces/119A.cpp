
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cctype>
#include <map>
#include <stack>
#include <queue>

#define S(n)                        scanf("%d",&n)
#define SC(n)                       scanf("%c",&n)
#define SL(n)                       scanf("%lld",&n)
#define SF(n)                       scanf("%lf",&n)
#define SS(n)                       scanf("%s",n)
#define ST(n,m)			            scanf("%d %d",&n,&m);
#define SLT(n,m)		            scanf("%lld %lld",&n,&m)

#define P(n)			            printf("%d\n",n)
#define PL(n)			            printf("%lld\n",n)
#define PT(n,m)			            printf("%d %d",n,m)

#define FORALL(i,a,b)               for(int i=a;i<b;++i)
#define FOREACH(i,a,b)		        for(int i=a;i<=b;++i)

#define MAX(a,b)                    ( (a) > (b) ? (a) : (b))
#define MIN(a,b)                    ( (a) < (b) ? (a) : (b))
#define CHECKBIT(n,b)               ( (n >> b) & 1)
#define ODD(a)                      (a&1?1:0)
#define EVEN(a)                     (a&1?0:1)

#define MOD                         1000000007
#define PI                          3.1415925535897932384626433832795

using namespace std;

//ios_base::sync_with_stdio(0);

int gcd (int a, int b)
{
    return (b != 0) ? gcd (b, a % b) : a;
}

int main()
{
    int a, b, n, val;
    int win = 0;
    S(a); S(b); S(n);

    while (n != 0){
        val = gcd (a, n);
        n -= val;
        if (n == 0){
            printf ("0\n");
            break;
        }
        val = gcd (b, n);        
        n -= val;
        if (n == 0){
            printf ("1\n");
            break;
        }
    }
    return 0;
}
