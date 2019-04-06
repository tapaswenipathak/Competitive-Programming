#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    scanf( "%d", &t );

    int scenario = t, nfriend;
    long long int need;

    while( t-- ){
	
	scanf( "%lld %d", &need, &nfriend );
	
	int stamps[nfriend];
	long long int sum = 0;
	int minfriendreq = 0;
	bool flag = false;
	
	for( int i = 0 ; i < nfriend; ++i ){
	    scanf( "%d", &stamps[i] );
	}
	
	sort( stamps, stamps + nfriend );

	for( int i = nfriend - 1; i >= 0; --i ){
	    sum += stamps[i];
	    ++minfriendreq;
	    if( sum >= need ){
		printf( "Scenario #%d:\n%d\n", scenario - t, minfriendreq );
		flag = true;
		break;
	    }
	}

	if( !flag ){
	    printf( "Scenario #%d:\nimpossible\n", scenario - t );
	}
    }
    return 0;
}


















