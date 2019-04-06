#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int num;
    
    cin >> num;

    if( num % 10 ){
        printf( "1\n%d", num % 10 );
    }
    else{
        printf( "2" );
    }
    return 0;
}
