#include <cmath>
#include <cstdio>

const double pi = .5 / acos(-1);
int main()
{   
    for( int L; scanf( "%d", &L ) && L; ){
	printf( "%.2lf\n", L * L * pi );
    }
    return 0;
}
