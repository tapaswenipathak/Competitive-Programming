#include <iostream>
#include <cmath>
#include <set>
using namespace std;
int main()
{
    int total = 0;
    set<double> result;
    for (double a = 2; a <= 100; ++a){
	for (double b = 2; b <= 100; ++b)
	{
	    result.insert (pow (a, b));
	}
    }
    total = result.size ();
    std::ios_base::sync_with_stdio(false);
    cout<<total;

    return 0;
}
