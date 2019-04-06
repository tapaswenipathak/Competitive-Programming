#include <stdio.h>
int main()
{
    int num = 1, increment = 2, diagonalCount = 4, sum = 1, i = 0;
    for ( i = 0; i < 500; ++i )
    {
	while ( diagonalCount )
	{
	    num += increment;
	    sum += num;
	    --diagonalCount;
	}
	diagonalCount = 4;
	increment += 2;
    }
    printf( "%d", sum ); 
    return 0;
}
//Tapasweni Pathak
//There is a pattern in the matrix 
//The first spiral is composed of 1
//The second spiral is composed of 1(+2=), 3(+2=), 5(+2=), 7(+2=), 9
//The third spiral is composed of 9(+4=), 13(+4=), 17(+4=), 21(+4=), 25
