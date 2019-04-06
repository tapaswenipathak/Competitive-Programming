#include <iostream>
#include <map>
#include <cstdio>
#include <algorithm>
using namespace std;
map< int, long long>h;

long long int memoize( long long int );
int main()
{
    long long int n;
    h.clear();
    while( scanf( "%lld", &n ) == 1 ){
	printf( "%lld\n", memoize(n) );
    }
    return 0;
}

long long int memoize( long long int n ){
    if( n == 0 ){
	return 0;
    }

    long long r = h[n];
    
    if( r == 0 ){
	r = max(n, memoize(n/2) + memoize(n/3) + memoize(n/4));
	h[n] = r;
    }
    return r;
}
