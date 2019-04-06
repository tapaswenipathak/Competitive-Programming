#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char line[200];
    int syllable;
    bool flag = true;

    for(int i = 0; i < 3; ++i ){
	syllable = 0;
	fgets( line, 200, stdin );
    
	int len = strlen(line);
	
	
	for(int j = 0; j < len; ++j ){
	    if( line[j] == 'a' || line[j] == 'e' || line[j] == 'i' || line[j] == 'o' || line[j] == 'u' ){
		++syllable;
	    }
	}

	if(syllable == 5 && i == 0){
	    flag = true;
	   // cout <<"enter";
	    continue;
	}
	if( syllable != 5 && i == 0 ){
	    flag = false;
	    break;
	}
	if(syllable == 7 && i == 1){
	    flag = true;
	    continue;
	}
	if( syllable != 7 && i == 1 ) {
	    flag = false;
	    break;
	}
	if(syllable == 5 && i == 2){
	    flag = true;
	    continue;
	}
	if( syllable != 5 && i == 2){
	    flag = false;
	    break;
	}
    }

    if(flag){
	printf( "YES" );
    }
    else{
	printf( "NO" );
    }

    return 0;
}
