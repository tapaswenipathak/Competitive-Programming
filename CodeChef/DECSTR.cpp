
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
	int T;
	cin >> T;
	while (T--){
		string str = "abcdefghijklmnopqrstuvwxyz";
		string revstr = "zyxwvutsrqponmlkjihgfedcba";
		int K;
		cin >> K;
		if (K == 25){
			cout << revstr;
		}
		else if (K == 50){
			cout << revstr << revstr;
		}
		else if (K == 75){
			cout << revstr << revstr << revstr;
		}
		else if (K == 100){
			cout << revstr << revstr << revstr << revstr;
		}
		else {
			int x = K / 25;
			int y = K % 25;
			if (y){
				while (y >= 0){
					cout << str[y--];
				}
				while (x--){
					cout << revstr;
				}
			}
		}
		cout << endl;
	}

    return 0;
}
