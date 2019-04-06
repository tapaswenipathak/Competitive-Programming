#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int N, sum = 0, each = 0, moves = 0;
    while( 1 ){
	moves = 0, each = 0, N = 0, sum = 0;
	scanf( "%d", &N );
	if( N == -1 ){
	    return 0;
	}
	int candy[N];
	for( int i = 0; i < N; ++i ){
	    cin >> candy[i];
	    sum += candy[i];
	}
	if( sum % N != 0 ){
	    printf( "-1\n" );
	    continue;
	}
	each = sum / N;
	sort( candy, candy + N );
	for( int i = 0; i < N; ++i ){
	    if( candy[i] >= each ){
		break;
	    }
	    else{
		moves = moves + each - candy[i];
	    }
	}
	printf( "%d\n", moves );
    }
    return 0;
}
