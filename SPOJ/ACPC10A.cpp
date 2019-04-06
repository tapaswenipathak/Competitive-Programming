#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a1, a2, a3, d1, d2, r1, r2;
    while( 1 ){
	a1 = 0, a2 = 0, a3 = 0, d1 = 0, d2 = 0, r1 = 0, r2 = 0;
	scanf( "%d %d %d", &a1, &a2, &a3 );
	if( a1 == 0 && a2 == 0 && a3 == 0 ){
	    return 0;
	}
	d1 = a2 - a1;
	d2 = a3 - a2;
	if( d1 == d2 ){
	    printf( "AP %d\n", a3 + d1 );
	    continue;
	}
	r1 = a2 / a1;
	r2 = a3 / a2;
	if( r1 == r2 ){
	    printf( "GP %d\n", a3 * r1 );
	}
    }
    return 0;
}
