
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

int main()
{
    int k, l, m, n, d, damaged = 0;
    
    S(k); S(l); S(m); S(n); S(d);
    
    bool dragon[d];

    FOREACH (i,1,d){
        dragon[i] = true;
        if (i % k == 0){
            dragon[i - 1] = false;
            ++damaged;
        }
        else if (i % l == 0){
            dragon[i - 1] == false;
            ++damaged;
        }
        else if (i % m == 0){
            dragon[i - 1] == false;
            ++damaged;
        }
        else if (i % n == 0){
            dragon[i - 1] == false;
            ++damaged;
        }
    }

    P(damaged);

    return 0;
}
