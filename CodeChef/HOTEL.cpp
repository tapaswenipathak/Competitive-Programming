
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

struct guest{
	int at;
	int dt;
};
bool sort_func (const guest &, const guest &);

bool sort_func (const guest &a, const guest &b) {
	return a.dt < b.dt;
}

int main()
{
    ios_base::sync_with_stdio(0);
	int T;
	cin >> T;
	while (T--){
		int N, count = 1;
		cin >> N;
		vector<guest> info, update_info;
		info.clear (), update_info.clear ();
		FORALL (i, 0, N){
			int time;
			cin >> time;
			info.push_back (guest ());
			info[i].at = time; 
		}
		FORALL (i, 0, N){
			int time;
			cin >> time;
			info.push_back (guest ());
			info[i].dt = time;
		}
		sort (info.begin (), info.end (), sort_func);
		int max = 0;
		FORALL (i, 0, info.size ()){
			count = 1;
			if (info[i].at == 0 || info[i].dt == 0){
					continue;
			}
			FORALL (j, i + 1, info.size ()){
				if (info[j].at == 0 || info[j].dt == 0){
					continue;
				}
				else {
					if (info[i].dt > info[j].at){
						++count;
					}
				}
			}
			if (max < count){
				max = count;
			}
		}
		cout << max << endl;
	}
    return 0;
}
