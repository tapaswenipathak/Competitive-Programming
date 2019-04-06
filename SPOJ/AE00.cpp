#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int N;
    scanf( "%d", &N );
    int count = N;
    for( int i = 2; i <= N/2; ++i ){
	for( int j = 2; j <= N/2; ++j ){
	    if( (i * j <= N) && (i <= j) ){
		++count;
	    }
	}
    }
    printf( "%d\n", count );
    return 0;
}
