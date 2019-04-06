#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    string input, rinput;
    int len = 0;
    while( 1 ){
	getline(std::cin, input);
	if ( input.compare("DONE") == 0){
	    return 0;
	}
	len = input.length();
	transform( input.begin(), input.end(), input.begin(), ::tolower);
	cout << input;	
	for( int i = 0; i < len; ++i ){
	    if(input[i] == ','){

	    }
	}
	if( input.compare(string( input.rbegin(), input.rend() ) ) == 0){
	    printf("You won't be eaten!\n");
	}
	else{
	    printf("Uh oh..\n");
	}

    }
    return 0;
}
