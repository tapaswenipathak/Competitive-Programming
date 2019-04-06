
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
	string input;
	while (true){
		cin >> input;
		if (input[0] == '0'){
			break;
		}
		int len = input.length();
		lli dp[5001];
		int i;
		dp[0] = dp[1] = 1;
		for (i = 2; i <= len; ++i){
			dp[i] = 0;
			char c1 = input[i - 2];
			char c2 = input[i - 1];
			if (c1 == '1' || (c1 == '2' && c2 <= '6')){
				dp[i] += dp[i - 2];
			}
			if (c2 != '0'){
				dp[i] += dp[i - 1];
			}
		}
		cout << dp[len] << "\n";
	}
	

    return 0;
}
