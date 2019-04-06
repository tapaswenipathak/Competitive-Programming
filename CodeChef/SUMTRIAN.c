#include <stdio.h>
#define MAX(a,b) (a>b?a:b)
int main()
{
    int t, n, i, j;
    scanf( "%d", &t );
    while( t-- )
    {
	scanf( "%d", &n );
	int ar[n][n];
	for ( i = 0; i < n; ++i )
	{
	    for ( j = 0; j <= i; ++j )
	    {
		scanf( "%d", &ar[i][j] );
	    }
	}
	int hLen = n, vLen = n;
	for( i = vLen - 2; i >= 0; --i )
	{
	    for( j = 0; j < hLen; ++j )
	    {
		ar[i][j] = MAX( ar[i][j] + ar[i+1][j], ar[i][j] + ar[i+1][j+1] );        
	    }
             --hLen;
	}
	printf( "%d\n",ar[0][0] );
    }
    return 0;
}
