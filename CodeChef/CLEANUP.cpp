
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
	int T, N, M, completed_job_index;
	cin >> T;
	vector<bool> jobs;
	vector<int> todo_chef, todo_assistant;
	while (T--){
		jobs.clear (), todo_chef.clear (), todo_assistant.clear ();
		cin >> N >> M;
		FORALL (i, 0, N){
			jobs.push_back (true);
		}
		FORALL (i, 0, M){
			cin >> completed_job_index;
			jobs[completed_job_index - 1] = false;
		}
		bool alter = true;
		FORALL (i, 0, jobs.size ()){
			if (jobs[i] && alter){
				todo_chef.push_back (i + 1);
				alter = false;
			}
			else if (jobs[i] && !alter){
				todo_assistant.push_back (i + 1);
				alter = true;
			}
		}
		FORALL (i, 0, todo_chef.size ()){
			cout << todo_chef[i] << " ";
		}
		cout << endl;
		FORALL (i, 0, todo_assistant.size ()){
			cout << todo_assistant[i] << " ";
		}
		cout << endl;
	}
    return 0;
}
