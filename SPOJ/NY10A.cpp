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
#define st(n,m)			    scanf("%d %d",n,m);
#define slt(n,m)		    scanf("%lld %lld",n,m)

#define p(n)			    printf("%d\n",n)
#define pl(n)			    printf("%lld\n",n)
#define pt(n,m)                     printf("%d %d",n,m);

#define forall(i,a,b)               for(int i=a;i<b;++i)
#define foreach(i,a,b)		    for(int i=a;i<=b;++i)

#define maX(a,b)                    ( (a) > (b) ? (a) : (b))
#define miN(a,b)                    ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)               ( (n >> b) & 1)

using namespace std;

int main()
{
    int P;
    s (P);
    foreach (i,1,P){
        int N, TTT = 0, TTH = 0, THT = 0, THH = 0, HTT = 0, HTH = 0, HHT = 0, HHH = 0;
        s (N);
        char tosses[41];
        ss (tosses);
        for (int i = 0; tosses[i]; ++i){
            if (tosses[i] == 'T' && tosses[i + 1] == 'T' && tosses[i + 2] == 'T'){
                ++TTT;
            }
            else if (tosses[i] == 'T' && tosses[i + 1] == 'T' && tosses[i + 2] == 'H'){
                ++TTH;
            }
	    else if (tosses[i] == 'T' && tosses[i + 1] == 'H' && tosses[i + 2] == 'T'){
                ++THT;
            }
            else if (tosses[i] == 'T' && tosses[i + 1] == 'H' && tosses[i + 2] == 'H'){
                ++THH;
            }
	    else if (tosses[i] == 'H' && tosses[i + 1] == 'T' && tosses[i + 2] == 'T'){
                ++HTT;
            }
 	    else if (tosses[i] == 'H' && tosses[i + 1] == 'T' && tosses[i + 2] == 'H'){
                ++HTH;
            }
   	    else if (tosses[i] == 'H' && tosses[i + 1] == 'H' && tosses[i + 2] == 'T'){
                ++HHT;
            }
	    else if (tosses[i] == 'H' && tosses[i + 1] == 'H' && tosses[i + 2] == 'H'){
                ++HHH;
            }
        }
        printf ("%d ", N);
        pt (TTT,TTH); printf (" ");
        pt (THT,THH); printf (" ");
        pt (HTT,HTH); printf (" ");
        pt (HHT,HHH); printf (" ");
        printf ("\n");
    }

    return 0;
}
