/*
 *Sieve of Eratosthenes
 */
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int n, i, j, k;
    scanf( "%d", &n );
    bool numbers[n];

    for( i = 0; i < n; ++i )
    {
	numbers[i] = true;
    }

    numbers[0] = numbers[1] = false;
    for( i = 2; i < n; ++i )
    {
	printf( "%d,", i );
    }

    for ( i = 2; i <= sqrt( n ); ++i )
    {
	if( numbers[i] == true )
	{
	    for(j = i * i, k = 0; ++k, j < n; j = ( ( i * i ) + k * i ) )
	    {
		numbers[j] = false;
	    }
	}
    }

    printf( "\n" );
    for( i = 0; i < n; ++i )
    {
	if( numbers[i] == true )
	{
	    printf( "%d,", i );
	}
    }
    return 0;
}

//Tapasweni Pathak
