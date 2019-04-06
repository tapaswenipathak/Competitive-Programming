#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    long long int n, x, time = 0;

    cin >> n >> x;

    long long int c[n];

    for (int i = 0; i < n; ++i){
        cin >> c[i];
    }

    sort (c, c + n);

    for (int i = 0; i < n; ++i){
        time = time + x * c[i];
        if (x > 1){
            --x;
        }
    }

    cout << time;

    return 0;
}
