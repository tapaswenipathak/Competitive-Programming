
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

int main()
{
    ios_base::sync_with_stdio(0);
	char line[1005];
	set<char>letter_set;
	cin.getline (line, 1005);
	for (int i = 0; line[i]; ++i){
		if (line[i] == '{' || line[i] == '}' || line[i] == ' ' || line[i] ==','){
			continue;
		}
		else{
			letter_set.insert (line[i]);
		}
	}
	cout << letter_set.size ();
    return 0;
}
