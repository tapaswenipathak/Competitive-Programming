
/*
ID : tapaswe1
PROG : gift1
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
	ofstream fout ("gift1.out");
	ifstream fin ("gift1.in");
	int NP, final_money_value = 0;
	string name;
	typedef map<string, pair<int, int> > input_map;
	typedef map<string, int> map_str_int;
	typedef vector<string> names_v; //Will Remain Unordered
	names_v nv;
	input_map im;
	map_str_int om; //Output Map
	map_str_int sm; //Save Map
	map_str_int ewom; //Easy Way Out For Extracting Values
	vector<string>::iterator nv_it;
	fin >> NP;
	int tNP = NP;
	while (tNP--){
		fin >> name;
	    im.insert (make_pair(name, make_pair(0, 0)));
		om.insert (make_pair(name, final_money_value));
		sm.insert (make_pair(name, 0));
		ewom.insert (make_pair(name, 0));
		nv.push_back (name);
	}
	set<string> names;
	bool flag = true;
	while (flag){
		int num_of_people = 0, initial_money_value = 0, total_money = 0, money_gifted = 0, money_left = 0;
		fin >> name;
		names.insert (name);
		fin >> initial_money_value;
		fin >> num_of_people;
		im[name] = make_pair (initial_money_value, num_of_people);
		sm[name] = initial_money_value;
		if (num_of_people != 0){
			money_gifted = initial_money_value / num_of_people;
			money_left = initial_money_value % num_of_people;
		}
		im[name] = make_pair (money_left, num_of_people);
		ewom[name] = money_left;
		while (num_of_people--){
			fin >> name;
			om[name] += money_gifted;
		}
		if (NP == names.size ()){
			flag = false;
		}
	}
	int initial_money = 0, final_money = 0, gain_loss = 0;
	for (int i = 0; i < nv.size(); ++i){
		fout << nv[i] << " ";
		name = nv[i];
		initial_money = sm[name];
		final_money = ewom[name] + om[name];
		gain_loss = final_money - initial_money;
		fout << gain_loss;
		fout << "\n";
	}
    return 0;
}
