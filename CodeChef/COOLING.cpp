
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
	int T, N = 0, weight = 0, max_no_pies;;
	vector<int> pies, racks;
	cin >> T;
	while (T--){
		max_no_pies = 0, weight = 0;
		racks.clear (), pies.clear ();
		cin >> N;
		FORALL (i, 0, 2){
			FORALL (j, 0, N){
				cin >> weight;
				if (i == 0){
					pies.push_back (weight);
				}
				if (i == 1){
					racks.push_back (weight);
				}
			}
		}
		sort (pies.begin(), pies.end()), sort (racks.begin(), racks.end());
		for (int i = 0, j = 0; j < racks.size (); ++j){
			if (pies[i] <= racks[j]){
				++max_no_pies;
				++i;
			}
		}
		cout << max_no_pies << endl;
	}
    return 0;
}
