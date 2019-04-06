#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    float c, n;
    while( 1 ){
	scanf( "%f", &c );
	if( c == (float)0.0 ){
	    break;
	}
	int i;
	n = 0.0;
	for( i = 1; n <= c ; ++i ){
	    n = n + ((float)1 / (i + 1));
	}
	int val = (int) n;
	printf( "%d card(s)\n", i - 1 );
    }
    return 0;
}

























