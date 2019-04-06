#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    int w[n];

    for( int i = 0; i < n; ++i ){
	cin >> w[i];
	w[i] = w[i] / 100;    
	sum += w[i];
    }
    if( sum % 2 == 0 ){
	printf( "YES" );
    }
    else{
	printf( "NO" );
    }

    return 0;
}
