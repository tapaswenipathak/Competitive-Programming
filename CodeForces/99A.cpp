#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    char num[2000];
    int carry = 0, val = 0;
    bool flag = true;

    cin >> num;


    for( int i = 0; num[i]; ++i ){
	
	if( num[i] == '.' && (num[i - 1] != '9') && ((num[i + 1] - '0') < 5) ){
	    for( int k = 0; num[k]; ++k ){
		if( num[k] == '.' ){
		    return 0;
		}
		printf( "%c", num[k] );
	    }
	    return 0;
	}



	if( num[i] == '.' && (num[i -1] != '9') && ((num[i + 1] - '0') >= 5) ){
	    int j;
	    for(j = 0; num[j]; ++j){
		if(num[j] == '.'){
		    break;
		}
	    }
	    int index = j, size;
	    int rnum[2000] = { -1 };
	    size = index + 1;
	    for( j -= 1; j >= 0; --j ){

		if( flag ){
		    val = ( (num[j] - '0') + 1 + carry ) % 10; 
		    flag = false;
		    rnum[index] = val;
		    --index;
		}
		else{
		    val = (((num[j] - '0') + carry) % 10);
		    rnum[index] = val;
		    --index;
		}
		if( val >= 10 ){
		    carry = val / 10;
		}
	    }

	    if( carry ){
		rnum[index] = carry;
		--index;
	    }

	    for( int k = 0; k < size ; ++k ){

		if( rnum[k] != -1 ){
		    printf( "%d", rnum[k] );
		}
	    }
	    return 0;
	}


	if( num[i] == '.' && num[i - 1] == '9' ){
	    printf( "GOTO Vasilisa." );
	}
    }
    return 0;
}
