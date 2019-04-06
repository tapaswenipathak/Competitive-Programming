
/*
ID : tapaswe1
PROG : friday
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

int main()
{
    //ios_base::sync_with_stdio(0);
	ofstream fout ("friday.out");
	ifstream fin ("friday.in");
	int a, val = 3;
	fin >> a;
	int days_in_month[12] = {31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	int output[7] = {0};
	for (int year = 1900; (year < (1900 + a)); ++ year){
		if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)){
			days_in_month[2] = 29;
		}
		for (int month = 0; month < 12; ++month){
			val = (val + days_in_month[month]) % 7;
			++output[val];
		}
		days_in_month[2] = 28;
	}
	for (int i = 0; i < 6; ++i){
		fout << output[(i + 6) % 7] << " ";
	}
	fout << output[5] << "\n";
	fin.close();
	fout.close();

    return 0;
}
