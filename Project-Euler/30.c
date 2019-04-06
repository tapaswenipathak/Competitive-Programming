#include <stdio.h>
#include <math.h>
int main()
{
    int i, num, tnum, digit, sum = 0;
    long int satisfyingNumberSum = 0;
    for ( i = 2; i <= 236196; ++i )
    {
	num = tnum = i;
	sum = 0;
	do
	{
	    digit = tnum % 10;
	    tnum /= 10;
	    sum = sum + pow ( digit , 5 );
	}while( tnum );
	if ( num == sum )
	{
	    satisfyingNumberSum += num;
	}
    }
    printf( "\nResult Sum = %ld", satisfyingNumberSum );
    return 0;
}
//( ( exp - 1 ) * ( 9 ^ exp ) )
