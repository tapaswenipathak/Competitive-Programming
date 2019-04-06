#include <cstdio>
int main(){
    int t, a;
    static int table[] = {
          0, 0, 0, 0, 1, 1, 1, 1, 6, 2, 4, 8, 1, 3, 9, 7, 6, 4, 6, 4, 
          5, 5, 5, 5, 6, 6, 6, 6, 1, 7, 9, 3, 6, 8, 4, 2, 1, 9, 1, 9	
    };
    long long int b;
    scanf( "%d", &t );
    while( t-- ){
	a = 0, b = 0;
	scanf( "%d %lld", &a, &b );
	if( b == 0 ){
	    printf( "1\n" );
	    continue;
	}
	printf( "%d\n", table[( (a % 10) << 2 ) + (b & 3)]);
    }
    return 0;
}
