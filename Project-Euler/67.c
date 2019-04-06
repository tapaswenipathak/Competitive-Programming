#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b) (a>b?a:b)
int main()
{
    FILE *fin;
    int num = 0, i, j;
 		int ar[100][100];
    fin = fopen("triangle.txt","r");
		fscanf(fin, "%d", &num);
		ar[0][0] = num;
    while ( !feof (fin) )
		{
				fscanf(fin, "\n");
				for ( i = 1; i < 100; ++i )
				{
						for ( j = 0; j <= i; ++j )
						{
								fscanf(fin, "%d ", &num);
								ar[i][j] = num;
						}
						fscanf(fin, "\n");
				}
    }
		int hLen = 100, vLen = 100;
    for( i = vLen - 2; i >= 0; --i )
    {   
    		for( j = 0; j < hLen; ++j )
        {   
            ar[i][j] = MAX( ar[i][j] + ar[i+1][j], ar[i][j] + ar[i+1][j+1] );                    
        }   
				--hLen;
    }   
		printf( "%d\n",ar[0][0] );
    fclose(fin);
    return 0;
}
