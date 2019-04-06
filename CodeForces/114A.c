#include <stdio.h>
#include <string.h>
int main()
{
    char alphaset[26] = { 'A', 'B', 'C', 'D', 'E', 'F'};
    char gname[100];
    char hname[100];
    char morning[100];
    char concate[200];

    scanf( "%s", gname );
    scanf( "%s", hname );
    scanf( "%s", morning );
    
    int glen = strlen( gname );
    int hlen = strlen( hname );
    int mlen = strlen( morning );
    
    strcat( concate, gname );
    strcat( concate, hname );
    
    

    return 0;
}
