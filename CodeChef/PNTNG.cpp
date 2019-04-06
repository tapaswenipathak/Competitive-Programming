
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

struct table{
	long long int Tk;
	long long int Ck;
}level[100001];
 
bool func(struct table const &lhs,struct table const &rhs){
	return lhs.Ck < rhs.Ck;
}
 
 
int main() {
	ios_base::sync_with_stdio(0);
	long long int N, M, H;
	cin  >> N >> M >> H;
	long long int cell = N * M;
	FORALL (i, 0, H){
		cin >> level[i].Tk >> level[i].Ck;
	}
	sort (level, level + H, func);
	long long int min_cost = 0;
 	FORALL (i, 0, H){
		if (cell == 0){
			break;
		}
		else if (cell - level[i].Tk < 0){
			min_cost = min_cost + (cell) * (level[i].Ck);
			cell = 0;
		}
		else if (cell - level[i].Tk >= 0){
			min_cost = min_cost + (level[i].Tk) * (level[i].Ck);
			cell = cell - level[i].Tk;
		}
	}
 
	if (cell){
		cout << "Impossible" << endl;
	}
	else{
		cout << min_cost << endl;
	}
	return 0;
}

