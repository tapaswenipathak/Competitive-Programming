#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int N, i;

    while( scanf("%d", &N) && (N != -1) ){
        N -= 1;
        i = 0;
        while( N > 0 ){
            N = N - (6 * i);

            ++i;
        }

        if( N == 0 ){
            cout << "Y\n";
        }
        else{
            cout << "N\n";
        }
    }


    return 0;
}
