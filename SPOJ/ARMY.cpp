#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int t, NG, NM;

    scanf( "%d", &t );

    while( t-- ){
	
	printf( "\n" );

	scanf( "%d %d", &NG, &NM );
	
	int strengthNG[NG], strengthNM[NM];

	for( int i = 0; i < NG; ++i ){
	    scanf( "%d", &strengthNG[i] );
	}
	for( int j = 0; j < NM; ++j ){
	    scanf( "%d", &strengthNM[j] );
	}

	int *max_strengthNG = max_element( strengthNG, strengthNG + NG );

	bool flag = false, equalflag = false;
	for( int i = 0; i < NM ; ++i ){
	    if( strengthNM[i] < *max_strengthNG ){
		flag = true;
		equalflag = false;
	    }
	    else if( strengthNM[i] > *max_strengthNG ){
		flag = false;
		equalflag = false;
		break;
	    }
	    if( strengthNM[i] == *max_strengthNG ){
		equalflag = true;
	    }
	}
	if( flag || equalflag ){
	    printf( "Godzilla\n" );
	}	    
	else{
	    printf( "MechaGodzilla\n" );
	}
    }
    return 0;
}
















