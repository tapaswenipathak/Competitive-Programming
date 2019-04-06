
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

using namespace std;

bool islucky (int num){
	int digit = 0;
	while (num){
		digit = num % 10;
		if (digit != 4 && digit != 7){
			return false;
		}
		num /= 10;
	}
	return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	bool flag = false;

	for (int i = 4; i <= n; ++i){
		if (islucky(i)){
			if (n % i == 0){
				cout << "YES";
				flag = true;
				break;
			}
		}
	}

	if (!flag){
		cout << "NO";
	}
    return 0;
}
