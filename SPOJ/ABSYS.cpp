#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int toNum( string );
int main(){
    int t;

    scanf( "%d", &t );
    
    while( t-- ){
	
	string s1, s2, s3, s4, s5;
	int val1 = 0, val2 = 0, val3 = 0;
	bool flag = true;
	
	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	
	val1 = toNum(s1);
	val2 = toNum(s3);
	val3 = toNum(s5);

	if( val1 < 0 ){
	    val1 = val3 - val2; 
	}
	if( val2 < 0 ){
	    val2 = val3 - val1;
	}
	if( val3 < 0 ){
	    val3 = val1 + val2;
	}

	printf( "%d + %d = %d\n", val1, val2, val3 );
    }
    return 0;
}

int toNum( string tempstr ){
    int val = 0;
    for( int i = 0 ; i < tempstr.length(); ++i ){
	if( !isdigit(tempstr[i])){
	    return -1;
	}
	else{
	    val = (val * 10) + (tempstr[i] - '0');
	}
    }

    return val;
}


