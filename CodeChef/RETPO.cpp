
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
#include <climits>
#include <cstdlib>

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
    ios_base::sync_with_stdio(0);
	lli T;
	cin >> T;
	while (T--){
		lli shift;
		lli dist;
		lli x, y;
		cin >> x >> y;
		if (x < 0) {
			x *= -1;
		}
		if (y < 0){
			y *= -1;
		}
		lli max = MAX (x, y);
		lli min;
		if ( max == x){
			min = y;
		}
		else {
			min = x;
		}
		if (x > y){
			if (EVEN (max) && EVEN (min)){
				dist = 2 * max;
			}
			else if (ODD (max) && EVEN (min)) {
				dist = 2 * max + 1;
			}
			else if (EVEN (max) && ODD (min)){
				dist = 2 * max + 1;
			}
			else {
				dist = 2 * max;
			}
		}
		else if (y > x){
			if (EVEN (max) && EVEN (min)){
				dist = 2 * max;
			}
			else if (ODD (max) && EVEN (min)) {
				dist = 2 * max - 1;
			}
			else if (EVEN (max) && ODD (min)){
				dist = 2 * max - 1;
			}
			else {
				dist = 2 * max;
			}
		
		}
		else {
			dist = 2 * max;
		}
		
		cout << dist << endl;
	}

    return 0;
}
