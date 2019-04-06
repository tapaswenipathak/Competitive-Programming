#include <stdio.h>
#define RECURRING_LIMIT 1000
int main()
{   
    int i = 0, num, maxRecurringDecimal = 0, maxRecurringLen = 0;
    for ( num = RECURRING_LIMIT - 1 ; num > 1; --num )
    {
	int rem = 1;
	for ( i = 0; i < num; ++i )
	{
	    rem = ( rem * 10 ) % num;
	}
	int tempRem = rem;
	int recurringLen = 0;
	do
	{
	    rem = ( rem * 10 ) % num;
	    ++recurringLen;
	}while( rem != tempRem );
	if ( recurringLen> maxRecurringLen )
	{
	    maxRecurringLen = recurringLen;
	    maxRecurringDecimal = num;
	}

    }
    printf( "Max Recurring Decimal: %d\n%dMax Recurring Length: ",maxRecurringDecimal, maxRecurringLen );

    return 0;
}
//Tapasweni Pathak
//the maximum recurring cycle length of 1/d i
//s d-1, as it is pretty obvious from the example. We can get d-1 different //possible remainders from the number, since if the result is equal to or gr//eater than d, then it is not a remainder.
