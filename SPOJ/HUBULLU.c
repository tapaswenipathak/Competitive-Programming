
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define st(n,m)                     scanf("%d %d",&n, &m)
// Useful constants
#define INF                         (int)1e9
#define EPS                         1e-9

// Useful container manipulation / traversal macros
#define forall(i,a,b)               for(int i=a;i<b;i++)

// Some common useful functions
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)                ( (n >> b) & 1)

int main()
{
    int t, n, player;

    s(t);

    while (t--){
        st(n,player);
        if (1 - player){
            printf ("Airborne wins.\n");
        }
        else{
            printf ("Pagfloyd wins.\n");
        }
    }
 
    return 0;
}

