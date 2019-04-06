
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

#define S(n)                      	scanf("%d",&n)
#define SC(n)                     	scanf("%c",&n)
#define SL(n)                     	scanf("%lld",&n)
#define SF(n)                     	scanf("%lf",&n)
#define SS(n)                     	scanf("%s",n)
#define ST(n,m)			        scanf("%d %d",&n,&m);
#define SLT(n,m)		        scanf("%lld %lld",&n,&m)

#define P(n)			        printf("%d\n",n)
#define PL(n)			        printf("%lld\n",n)
#define PT(n,m)			        printf("%d %d",n,m)

#define FORALL(i,a,b)                   for(int i=a;i<b;++i)
#define FOREACH(i,a,b)		        for(int i=a;i<=b;++i)

#define MAX(a,b)                        ( (a) > (b) ? (a) : (b))
#define MIN(a,b)                        ( (a) < (b) ? (a) : (b))
#define CHECKBIT(n,b)                   ( (n >> b) & 1)
#define ODD(a)                          (a&1?1:0)
#define EVEN(a)                         (a&1?0:1)

#define MOD                             1000000007
#define PI                              3.1415925535897932384626433832795

using namespace std;

//ios_base::sync_with_stdio(0);

int main()
{
    int n, tsum = 0, min_need = 0, sum = 0;
    S(n);
    int a[n];
    FORALL (i,0,n){
        S(a[i]);
        tsum += a[i];
    }
    sort (a, a + n);
    for (int i = n - 1; i >= 0 && sum <= tsum / 2; --i){
        sum += a[i];
        ++min_need;
    }
    P (min_need);

    return 0;
}
