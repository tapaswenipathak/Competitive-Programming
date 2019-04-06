
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
#include <bitset>
#include <deque>
#include <list>

#define FORALL(i,a,b)				for(int i = a; i < b; ++i)
#define FOREACH(i,a,b)				for(int i = a; i <= b; ++i)
#define REP(i,n) 		                for(int i = 0; i < n ; ++i)
#define REVALL(i,n) 		                for(int i = n ; i >= 0 ; --i)
#define REV(i,a,b) 		                for(int i = a ; i >= b ; --i)
#define TR(c,i) 				for(typeof((c).begin()) i=(c).begin();	i!=(c).end(); i++)

#define SC(n) 			                scanf("%d",&n)

#define MAX(a,b)				( (a) > (b) ? (a) : (b))
#define MIN(a,b)				( (a) < (b) ? (a) : (b))
#define CHECKBIT(n,b)				( (n >> b) & 1)
#define ODD(a)					(a & 1 ? 1 : 0)
#define EVEN(a)					(a & 1 ? 0 : 1)

#define MOD					1000000007
#define PI					3.1415925535897932384626433832795
#define INF 					1000000000 

#define PP 					pair<int,int> 
#define PB(a) 					push_back(a)
#define ALL(v) 					v.begin() , v.end() 
#define	VI    					vector<int> 
#define MII					map<int,int> 
#define MSI					map<string,int> 
#define VII					vector<vector<int> > 
#define VPP					vector<pair<int,int> > 

#define lli					long long int
#define ulli					unsigned long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    /*
    int T;
    SC(T);
    while (T--){
    }
    */

	int matrix[6][6];
	int pos_1_i, pos_1_j, move_i, move_j;
	REP (i, 5){
		REP (j, 5){
			cin >> matrix[i][j];
			if (matrix[i][j] == 1){
				pos_1_i = i + 1;
				pos_1_j = j + 1;
			}
		}
	}

	if (pos_1_i > 3){
		move_i = pos_1_i - 3;
	}
	else {
		move_i = 3 - pos_1_i;
	}
	if (pos_1_j > 3){
		move_j = pos_1_j - 3;
	}
	else {
		move_j = 3 - pos_1_j;
	}
	cout << move_i + move_j << endl;



    return 0;
}
