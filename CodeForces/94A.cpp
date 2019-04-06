#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    string bcode;
    string dbcode[10];

    cin >> bcode;
    for( int i = 0; i < sizeof(dbcode) / sizeof(dbcode[0]); ++i ){
	cin >> dbcode[i];
    }

    for( int i = 0; i < 8; ++i ){
	string x = bcode.substr(i * 10, 10);
	for( int j = 0; j < 10; ++j ){
	    if( x == dbcode[j] ){
		cout << j;
		break;
	    }
	}
    }


    return 0;
}


















