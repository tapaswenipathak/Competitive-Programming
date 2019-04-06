#include <stdio.h>
int main()
{
    int fact = 1, digit, sumOfFactorial = 0, sumOfSatisfying = 0, i, tnum, num;
    for ( i = 10; i < 2540160; ++i )
    {
	tnum = num = i;
	sumOfFactorial = 0;
	while( tnum )
	{
	    digit = tnum % 10;
	    tnum /= 10;
	    fact = 1;
	    for ( ; digit >= 1; --digit )
	    {
		fact *= digit;
	    }
	    sumOfFactorial += fact;
	}
	if( num == sumOfFactorial )
	{
	    sumOfSatisfying += num;
	}
    }
    printf("%d", sumOfSatisfying);
    return 0;
}
