#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char ber[101], bir[101]; 
    
    cin >> ber >> bir;
    
    int ber_len = strlen(ber);
    int bir_len = strlen(bir);

    reverse( ber, ber + ber_len );
    
    if( strcmp( ber, bir ) == 0 ){
	printf( "YES" );
    }
    else{
	printf( "NO" );
    }
    return 0;
}
