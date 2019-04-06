#include <stdio.h>
#include <string.h>
int main(){
    char str[200];
    int i = 0, flag = 0;
    scanf( "%s", str );
    int len = strlen(str);
    for( i = 0; i < len; ){
	if( str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B' ){
	    i += 3;
	}
	else{
	    break;
	}

    }
    for( ; i < len; ){
	if( str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B' ){
	    flag = 1;
	    i += 3;
	    continue;
	}
	else{ 
	    if( flag ){
		printf( " " );
		flag = 0;
	    }
	    printf( "%c", str[i] );
	    ++i;
	}
    }
    return 0;
}
