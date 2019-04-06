#include <stdio.h>
int main()
{
    int t;
    long int N = 0;
    scanf ( "%d", &t );
    while( t-- )
    {
	scanf( "%ld", &N );
	printf ( N & 1 ? "BOB\n" : "ALICE\n" );
    }
    return 0;
}
