//Tapasweni Pathak
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
#include <set>
#include <cstdlib>
#include <climits>

#define S(n)					scanf("%d",&n)
#define SC(n)					scanf("%c",&n)
#define SS(n)					scanf("%s",n)
#define ST(n,m)					scanf("%d %d",&n,&m);

#define P(n)					printf("%d\n",n)
#define PT(n,m)					printf("%d %d",n,m)

#define FORALL(i,a,b)				for(int i=a;i<b;++i)
#define FOREACH(i,a,b)				for(int i=a;i<=b;++i)

#define MAX(a,b)				( (a) > (b) ? (a) : (b))
#define MIN(a,b)				( (a) < (b) ? (a) : (b))
#define CHECKBIT(n,b)				( (n >> b) & 1)
#define ODD(a)					(a&1?1:0)
#define EVEN(a)					(a&1?0:1)

#define MOD					1000000007
#define PI					3.1415925535897932384626433832795

#define lli					long long int
#define ulli					unsigned long long int
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(0);
	int n, max_height = INT_MIN, min_height = INT_MAX, pos_max = 0, pos_min = 0;
	S (n);
	int heights[n];
	FORALL(i,0,n){
		S (heights[i]);
		if (max_height < heights[i]){
			max_height = heights[i];
			pos_max = i;
		}
		if (min_height >= heights[i]){
			min_height = heights[i];
			pos_min = i;
		}
	}
	if (max_height == heights[0] && min_height == heights[n - 1]){
		P (0);
	}
	else if (pos_max < pos_min){
		P (n - (n - pos_max) + (n - pos_min - 1));
	}
	else if (pos_max > pos_min){ 
		P ((n - (n - pos_max) + (n - pos_min - 1)) - 1);
	}


    return 0;
}
