
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

#define forall(i,a,b)               for(int i=a;i<b;++i)
#define foreach(i,a,b)		        for(int i=a;i<=b;++i)

#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)                ( (n >> b) & 1)

using namespace std;

int main()
{
    int T;
    s(T);
    foreach(i,1,T){
        double r;
        sf(r);
        double maxs = 0.25 + 4 * r * r;
        cout << "Case " << i << ": ";
        printf ("%.2lf\n", maxs);

    }

    return 0;
}
