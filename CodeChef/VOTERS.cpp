
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
	int N1, N2, N3;
	cin >> N1 >> N2 >> N3;
	vector<int> vlcombined;
	set<int> vlset;
	FORALL (i, 0, N1 + N2 + N3){
		int val;
		cin >> val;
		vlcombined.push_back (val);
	}

	sort (vlcombined.begin (), vlcombined.end ());

	FORALL (i, 0, N1 + N2 + N3){
		if (vlcombined[i] == vlcombined[i + 1]){
			vlset.insert (vlcombined[i]);
			++i;
		}
	}
	set<int>:: iterator it;
	cout << vlset.size () << endl;
	for (it = vlset.begin (); it != vlset.end (); ++it) {
		cout << *it << endl;
	}

    return 0;
}
