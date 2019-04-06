#include <stdio.h>
int main()
{
    int N, noofsquares = 0, i;
    while( 1 ){
	scanf( "%d", &N );
	noofsquares = 0;
	if( N == 0 ){
	    return 0;
	}
	for( i = N; i >= 1; --i ){
	    noofsquares = noofsquares + i * i;
	}
	printf( "%d\n", noofsquares );
	
    }
    return 0;
}
