//A : Number of attacker
//D : Number of Defender
//B : Distance of attacking players to the goal line
//C : Distance of defending players to the goal line


#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int A, D;

    while( scanf("%d %d", &A, &D) && (A != 0 && D != 0) ){

        int B[A], C[D];

        for( int i = 0; i < A; ++i ){
            cin >> B[i];
        }
        for( int i = 0; i < D; ++i ){
            cin >> C[i];
        }

        sort(B, B + A);
        sort(C, C + D);
        
        if( B[0] < C[1] ){
            cout << "Y\n";
        }
        else{
            cout << "N\n";
        }
    }

    while( A--  ){

    }


    return 0;
}
