#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char hello[10] = "hello";
    char input[205];
    int pos = 0;

    cin >> input;

    for( int i = 0; input[i]; ++i ){
	if( input[i] == hello[pos] ){
	    ++pos;
	}
    }

    if( pos == 5 ){
	printf( "YES" );
    }
    else{
	printf( "NO" );
    }
    return 0;
}
