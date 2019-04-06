#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t, n;
    scanf( "%d", &t );
    while( t-- ){
	int i, n, sum = 0;
	scanf( "%d", &n );
	for( i = 1; ; ++i ){
	    sum += i;
	    if( sum >= n ){
		break;
	    }
	}

	int val1 = n - ( sum - i );
	int val2 = i + 1;
	if( i % 2 == 0 ){
	    printf("TERM %d IS %d/%d\n", n, val1, val2 - val1 );
	}
	else{
	    printf("TERM %d IS %d/%d\n", n, val2 - val1, val1 );
	}
    }
    return 0;
}

