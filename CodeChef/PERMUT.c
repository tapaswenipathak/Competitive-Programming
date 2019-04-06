#include <stdio.h>
int main()
{
    int n, flag = 0, i = 0;
    do
    {
	flag = 0;
	scanf( "%d", &n);
	int inAr[n], outAr[n];
	for (i = 0; i < n; ++i)
	{
	    scanf( "%d", &inAr[i]);
	}
	for( i = 0; i < n; ++i)
	{
	    outAr[ inAr[i] - 1 ] = i + 1; 
	}
	for( i = 0; i < n; ++i)
	{
	    if( inAr[i] != outAr[i] )
	    {
		printf( "not ambiguous\n" );
		flag = 1;
		break;
	    }
	}
	if( !flag && n != 0 )
	{
	    printf( "ambiguous\n" );
	}
    }while(n != 0);

    return 0;
}
