#include <stdio.h>
int main() 
{
    int T, hh1, mm1, hh2, mm2, dist, p1, p2, difft, dh, dm;
    scanf("%d",&t);
    while( T-- )
    {
    	p1 = 0;
    	p2 = 0;
    	scanf("%d:%d", &hh1, &mm1);
	scanf("%d:%d", &hh2, &mm2);
    	scanf("%d", &dist);
    	if(mm2 > mm1)
    	{
    	    mm1 += 60;
    	    --hh1;
    	}
    	dm = mm1 - mm2;
    	dh = hh1 - hh2;
    	difft = ( dh * 60 ) + dm;
    	p1 = difft + dist;
    	
    	if( difft >= ( 2 * dist ) )
	{
	   p2 = difft;
	}
    	else
	{ 
	    p2 = difft + ( dist / 2 );
	}
    	
    	printf("%d.0 ", p1);
    	printf("%d.0 ", p2);
	printf( "\n" );

    }
	return 0;
}
