
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cctype>
// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define st(n,m)                     scanf("%d %d",&n,&m)
#define stl(n,m)                    scanf("%lld %lld",&n,&m)

//Output Macros
#define p(n)                        printf("%d",n)
#define pl(n)                       printf("%lld",n)

// Useful constants
#define INF                         (int)1e9
#define EPS                         1e-9

// Useful container manipulation / traversal macros
#define forall(i,a,b)               for(int i=a;i<b;++i)
#define foreach(i,a,b)              for(int i=a;i<=b;++i)

using namespace std;

int main()
{
    int T;
    long long int n, k, res = 1, minval = 0;
    s(T);
    while (T--){
        n = 0, k = 0, res = 1, minval = 0;
        stl(n,k);
        if (n == k){
            printf("1\n");
            continue;
        }
        n -= 1;
        minval = min((n - k + 1), (k - 1));
        foreach(i,1,minval){
            res *= n--;
            res /= i;
        }
        pl(res);
        printf("\n");


    }
    return 0;
}
