#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int T;
    long long int N, sum = 0, candy_i = 0;
    scanf( "%d", &T );
    while( T-- ){
	sum = 0;
	scanf( "%lld", &N );
	for( int i = 0; i < N; ++i ){
	    cin >> candy_i;
	    sum = (sum + candy_i) % N;
	}
	if ( sum % N == 0 ){
	    printf( "YES\n" );
	}
	else{
	    printf( "NO\n" );
	}
    }
    return 0;
}
