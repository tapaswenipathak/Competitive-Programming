
/*
ID : tapasweni.pathak
PROG : ride
LANG : C++
*/
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
#include <fstream>

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

bool isequal (string name_comet, string name_group){
	int product_comet = 1, product_group = 1;
	for (int i = 0; name_comet[i]; ++i){
		product_comet *= name_comet[i] - 'A' + 1;
	}
	for (int i = 0; name_group[i]; ++i){
		product_group *= name_group[i] - 'A' + 1;
	}
	product_comet %= 47;
	product_group %= 47;

	return (product_comet == product_group ? true : false);
}
int main()
{
    ios_base::sync_with_stdio(0);
	ofstream fout ("ride.out");
	ifstream fin ("ride.in");

	string name_comet, name_group;
	fin >> name_comet >> name_group;
	isequal (name_comet, name_group) ? fout << "GO\n" : fout << "STAY\n";
    return 0;
}
