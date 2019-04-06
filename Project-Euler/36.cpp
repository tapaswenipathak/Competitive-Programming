#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string base2Num, base10Num;
    int mask = 65536, flagBase10 = 0, flagBase2 = 0;
    int sumSatisfying = 0, i, num;
    for ( i = 1; i <= 1000000 ; ++i )
    {
	flagBase10 = flagBase2 = 0;
	num = i;
	stringstream ss;
	ss << num;
	base10Num = ss.str();
	if ( base10Num == string( base10Num.rbegin(), base10Num.rend() ) )
	{
	    flagBase10 = 1;
	}
	base2Num = "";
	mask = 2097152;
	while( mask )
        {
	    base2Num.push_back( (num & mask ? '1' : '0') );
	    mask >>= 1;
	}
	size_t firstOneAt = base2Num.find_first_of( "1" );
	base2Num.erase ( base2Num.begin(), base2Num.begin() + firstOneAt );
	//cout<<base2Num<<"\n";
	if ( base2Num == string( base2Num.rbegin(), base2Num.rend() ) )
	{
	    flagBase2 = 1;
	}
	if ( flagBase10 && flagBase2 )
	{
	    sumSatisfying += i;
	}
    }
    std::ios_base::sync_with_stdio(false);
    cout<< sumSatisfying;
    return 0;
}
