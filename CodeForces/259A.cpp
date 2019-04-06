#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){

    string board;
    bool flag = true;

    for( int i = 0; i < 8; ++i ){
	cin >> board;

	for( int j = 1; j < board.length(); ++j ){
	    if( board[j] == board[j - 1]){
		flag = false;
	    }
	}
    }

    if( flag ){
	printf( "YES" );
    }
    else{
	printf( "NO" );
    }



    return 0;
}
