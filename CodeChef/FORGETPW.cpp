
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cctype>
#include <map>

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
    int T;
    s (T);
    while (T--){
        int N;
        s (N);
        char ci, pi;
        map<char, char> rules;
        rules.clear();
        while (N--){
            cin >> ci >> pi;
            rules[ci] = pi;
        }
        string S;
        cin >> S;
        for (int i = 0; S[i]; ++i){
            if (rules[S[i]] != '\0'){
                S[i] = rules[S[i]];
            }
        }
        bool allzero = true;
        for (int i = 0; S[i]; ++i){
            if (S[i] == '0' || S[i] == '.'){
                allzero = true;
            }
            else{
                allzero = false;
                break;
            }

        }
        if (allzero){
            printf ("0");
        }
        bool thereisadot = false;
        for (int i = 0; S[i]; ++i){
            if (S[i] == '.'){
                thereisadot = true;
            }
        }
        for (int i = S.length() - 1; S[i] == '0' && !allzero && thereisadot; --i){
            S.erase (i, 1);
        }
        if (S[S.length() - 1] == '.' && !allzero && thereisadot){
            S.erase (S.length() - 1, 1);
        }
        bool flag = false;
        for (int i = 0; S[i] && !allzero; ++i){
            if (S[i] == '0' && i == 0){
                flag = true;
                continue;
            }
            if (S[i] == '0' && !flag){
                printf ("%c", S[i]);
            }
            if (S[i] != '0'){
                flag = false;
                printf ("%c", S[i]);
            }
        }
        printf ("\n");
    }

    return 0;
}
