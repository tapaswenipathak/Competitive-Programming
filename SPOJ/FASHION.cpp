#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t, N, sum = 0;
    scanf( "%d", &t );
    while( t-- ){
	sum = 0, N = 0;
	scanf( "%d", &N );
	int men[N], women[N];
	for( int i = 0; i < N; ++i ){
	    cin >> men[i];
	}
	for( int i = 0; i < N; ++i ){
	    cin >> women[i];
	}
	sort(men, men + N);
	sort(women, women + N);
	for( int i = 0; i < N; ++i ){
	    sum = sum + men[i] * women[i];
	}
	printf( "%d\n", sum );
    }
    return 0;
}
