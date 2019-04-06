#include <stdio.h>
int main()
{
    int t, player[2] = { 0 }, lead = 0, ScorePlayer1 = 0, ScorePlayer2 = 0, maxLead = 0, valPlayer1 = 0, valPlayer2 = 0;
    scanf( "%d", &t );
    while( t-- )
    {
	scanf( "%d %d", &valPlayer1, &valPlayer2 );
	ScorePlayer1 += valPlayer1;
	ScorePlayer2 += valPlayer2;
	lead = ( ScorePlayer1 > ScorePlayer2 ? ScorePlayer1 - ScorePlayer2 : ScorePlayer2 - ScorePlayer1 );
	if ( maxLead < lead )
	{
	    maxLead = lead;
	    player [ ScorePlayer1 > ScorePlayer2 ? 0 : 1 ] = 1;
	    player [ ScorePlayer2 < ScorePlayer1 ? 1 : 0 ] = 0;
	}
    }
    printf( "%d %d", player[0] > player[1] ? 1 : 2, maxLead );
    return 0;
}

