#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char input[100];
    scanf( "%s", input );
    for( i = 0; i < strlen(input); ++i ){
	input[i] = tolower(input[i]);
    }
    for( i = 0; i <strlen(input); ++i ){
	if( input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'y' ){
	    continue;
	}
	else{
	    printf( ".%c", input[i] );
	}
    }
    return 0;
}



































