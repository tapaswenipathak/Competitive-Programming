#include <cstdio>
#include <iostream>
using namespace std;

int main(){
   int stack[1024]; 
    for( int n; scanf( "%d", &n ) && n; ){

	int top = 0, num;
	int need = 1;
	bool okay = true;

	for( int i = 0; i < n; ++i ){
	    scanf( "%d", &num );
	    if( num == need ){
		++need;
	    }
	    else if( num != need ){
		while( (top) && (stack[top - 1] == need) ){
		    ++need;
		    --top;
		}
		if( !top || stack[top - 1] > num ){
		    stack[top++] = num;
		}
		else{
		    okay = false;
		}
	    }
	}

	puts( okay ? "yes" : "no" );

    }
    return 0;
}
