#include <iostream>
using namespace std;
int main()
{
    long long int t, term3, lastterm3, sum, noofterm, term1, diff;

    cin >> t;

    while( t-- ){
        cin >> term3 >> lastterm3 >> sum;

        noofterm = (2 * sum) / (term3 + lastterm3);
        diff = (lastterm3 - term3) / (noofterm - 5);
        term1 = term3 - (2 * diff);

        cout << noofterm << "\n";

        for( int i = 0; i < noofterm; ++i ){
            cout << (term1 + (i * diff)) << " ";
        }

        cout << "\n";
    }

    return 0;
}
