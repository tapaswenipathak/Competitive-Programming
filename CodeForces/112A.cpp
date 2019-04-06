#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char s1[205], s2[205];

    cin >> s1 >> s2;

    for( int i = 0; s1[i]; ++i ){
	s1[i] = tolower(s1[i]);
    }
    for( int i = 0; s2[i]; ++i ){
	s2[i] = tolower(s2[i]);
    }

    if( strcmp(s1, s2) == 0 ){
	printf( "0" );
    }
    if( strcmp(s1, s2) > 0 ){
	printf( "1" );
    }
    if( strcmp(s1, s2) < 0 ){
	printf( "-1" );
    }
    return 0;
}
