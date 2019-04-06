#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char gname[101] = {'\0'};
    char hname[101] = {'\0'};
    char morning[101] = {'\0'};
    char concate[200] = {'\0'};
    
    fgets( gname, 101, stdin );
    fgets( hname, 101, stdin );
    fgets( morning, 101, stdin );
    
    int glen = strlen( gname );
    int hlen = strlen( hname );
    int mlen = strlen( morning );
    
    if( gname[glen - 1] == '\n' ){
	gname[glen - 1] = '\0';
    }
    if( hname[hlen - 1] == '\n' ){
	hname[hlen - 1] = '\0';
    }
    if( morning[mlen - 1] == '\n' ){
	morning[mlen - 1] = '\0';
    }
    
    strcat( concate, gname );
    strcat( concate, hname );
    
    int clen = strlen(concate);
    mlen = strlen( morning); 
    
    sort( concate, concate + clen );
    sort( morning, morning + mlen );

    if( strcmp( concate, morning ) == 0 ){
	printf("YES");
    }
    else{
	printf("NO");
    }

    return 0;
}
