
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
#define SF(n)                     	scanf("%lf",&n)
#define SS(n)                     	scanf("%s",n)
#define ST(n,m)			            scanf("%d %d",&n,&m);

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


int main()
{
    ios_base::sync_with_stdio(0);
    string s;
    int plus = 0;

    cin >> s;
    
    sort (s.begin(), s.end());
    
    for (int i = 0; s[i]; ++i){
        if (s[i] == '+'){
            ++plus;
        }
        if (s[i] == '1' || s[i] == '2' || s[i] == '3'){
            cout << s[i];
            if (plus){
                cout << "+";
                --plus;
            }
        }
    }

    return 0;
}
