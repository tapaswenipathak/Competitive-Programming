
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

bool bfs (vector <int> graph[], int u, int N){
	bool visited[N + 1];
	FOREACH (i,0,N){
		visited[i] = false;
	}
	queue <int> bfsds;
	bfsds.push (u);
	int x = 0, count = 0, y = 0;
	while (!bfsds.empty()){
		x = bfsds.front();
		bfsds.pop();
		visited[x] = true;
		FORALL (i,0,graph[x].size()){
			y = graph[x][i];
			if (visited[y]){
				return false;
			}
			else{
				bfsds.push (y);
			}
		}
		++count;
	}
	return (count != N ? false : true);
}

int main()
{
    ios_base::sync_with_stdio(0);
	int N, M, u, v;
	cin >> N >> M;
	vector <int> graph[N + 1];
	FORALL(i,0,M){
		cin >> u >> v;
		graph[u].push_back(v);
	}
	N - 1 == M ? (bfs (graph, 1, N) ? cout << "YES" : cout << "NO") : cout << "NO";
    return 0;
}
