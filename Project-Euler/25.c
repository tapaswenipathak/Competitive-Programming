#include <stdio.h>
#include <math.h>
#define phi 1.6180
int main()
{
    int  no_of_digits = 1000;
    double term = 0;
    term = ( ( no_of_digits - 1 ) * log ( 10 ) + log ( 5 ) / 2 )/ ( log (phi) );

    printf( "%lf", term );
    return 0;
}
//Tapasweni Pathak
//Used a baisc formaul to find the first term to have 1000 digits
//Google it if not getting from the code
