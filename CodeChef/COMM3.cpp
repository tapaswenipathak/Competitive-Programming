
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
	int T;
	cin >> T;
	while (T--){
		int cnt = 0;
		double R;
		cin >> R;
		double x1, x2, x3, y1, y2, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		double dist12 = sqrt ( (pow ( (x2 - x1), 2) ) + (pow ( (y2 - y1), 2) ) );
		double dist13 = sqrt ( (pow ( (x3 - x1), 2) ) + (pow ( (y3 - y1), 2) ) );
		double dist23 = sqrt ( (pow ( (x3 - x2), 2) ) + (pow ( (y3 - y2), 2) ) );

		if (dist12 <= R){
			++cnt;
		}
		if (dist13 <= R){
			++cnt;
		}
		if (dist23 <= R){
			++cnt;
		}

		if (cnt >= 2){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}

	}

    return 0;
}
