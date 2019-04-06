
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
#include <limits>
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
	int T;
	cin >> T;
	while (T--){
		int x = 0, min_candle_digit = 0, min_candles = 9;
		int zero_candles = 0;
		FOREACH (i, 0, 9){
			cin >> x;
			if (i == 0){
				zero_candles = x;
			}
			if (min_candles > x && i != 0){
				min_candles = x;
				min_candle_digit = i;
			}
		}
		if (zero_candles < min_candles){
			cout << 1;
			FOREACH (i, 0, zero_candles){
				cout << 0;
			}
			cout << endl;
		}
		else{
			FOREACH (i, 0, min_candles){
				cout << min_candle_digit;
			}
			cout << endl;
		}
	}
    return 0;
}
