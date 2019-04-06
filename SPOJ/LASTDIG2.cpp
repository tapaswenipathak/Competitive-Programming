#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    int ld[] = {
        0, 0, 0, 0, 1, 1, 1, 1, 6, 2, 4, 8, 1, 3, 9, 7, 6, 4, 6, 4,
        5, 5, 5, 5, 6, 6, 6, 6, 1, 7, 9, 3, 6, 8, 4, 2, 1, 9, 1, 9
    };
    int t;
    cin >> t;
    while (t--){
        string a; long long int b; 
        cin >> a >> b;
        if (0 == b){
            cout << "1\n";
            continue;
        }
        cout << ld[((a[a.length() - 1] - '0' << 2) + (b & 3))] << "\n";
    }

    return 0;
}
