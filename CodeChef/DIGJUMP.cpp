
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cctype>
#include <queue>
#include <stack>

#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
#define st(n,m)			            scanf("%d %d",n,m);
#define slt(n,m)		            scanf("%lld %lld",n,m)

#define p(n)			            printf("%d",n)
#define pl(n)			            printf("%lld\n",n)
#define pt(n,m)			            printf("%d %d",n,m)

#define forall(i,a,b)               for(int i=a;i<b;++i)
#define foreach(i,a,b)		        for(int i=a;i<=b;++i)

#define maX(a,b)                    ( (a) > (b) ? (a) : (b))
#define miN(a,b)                    ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)               ( (n >> b) & 1)

using namespace std;


struct Sinfo
{
    int val;
    int dist;
}Sarr[100001] = {0};

vector <int> myvec[10];
int n = 0;
int found[10] = {0};
int visit[100001] = {0};

void BFS (int num)
{
    queue <int> mystack;
    mystack.push(num);
    visit[num] = 1;
    while (!mystack.empty()){
        int curr = mystack.front();
        mystack.pop();
        if (found[Sarr[curr].val] == 0){
            forall (i,0,myvec[Sarr[curr].val].size()){
                if (visit[myvec[Sarr[curr].val][i]] == 0){
                    visit[myvec[Sarr[curr].val][i]] = 1;
                    Sarr[myvec[Sarr[curr].val][i]].dist = Sarr[curr].dist + 1;
                    mystack.push(myvec[Sarr[curr].val][i]);
                }            
            }
            found[Sarr[curr].val] = Sarr[curr].dist + 1;
        }
        if ((curr + 1) < n && (curr + 1) >= 0){
            if (visit[curr + 1] == 0){
                visit[curr + 1] = 1; 
                Sarr[curr + 1].dist = Sarr[curr].dist + 1;
                mystack.push(curr + 1);
           }
        }
        if ((curr - 1) < n && (curr - 1) >= 0){
            if (visit[curr - 1] == 0){
                visit[curr - 1] = 1; 
                Sarr[curr - 1].dist = Sarr[curr].dist + 1;
                mystack.push(curr - 1);
            }
        }
    }
} 
int main() 
{
    char S[100001];
    ss(S);
    int i = 0;
    for (i = 0; S[i]; ++i){
        Sarr[i].val = S[i] - '0';
        myvec[Sarr[i].val].push_back(i);
    }
    n = i;
    BFS (0);
    p(Sarr[n - 1].dist);
    return 0;
}   
