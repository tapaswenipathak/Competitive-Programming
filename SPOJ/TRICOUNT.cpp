#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int t;
    long long int n, res = 0;

    scanf( "%d", &t );

    while( t-- ){
	n = 0, res = 0;
	scanf( "%llu", &n );
	if( n % 2 == 0 ){
	    res = (n * (n + 2) * ((n * 2) + 1)) / 8;
	}
	else{
	    res = ((n * (n + 2) * ((n * 2) + 1)) - 1) / 8;
	}

	printf( "%llu\n", res ); 
    }
    return 0;
}
