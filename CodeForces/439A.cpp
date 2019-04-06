
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int n, d, numofjokes = 0, songd = 0, td = 0, joked = 0;
    bool flag = true;

    cin >> n >> d;

    int t[n];

    for (int i = 0; i < n; ++i){
        cin >> t[i];
        songd += t[i];
    }
    
    td = songd + 10 * (n - 1);

    if (td <= d){
        flag = true;
    }
    else{
        flag = false;
    }

    if (flag){
        joked = d - songd;
        numofjokes = joked / 5;
        cout << numofjokes;
    }
    else{
        cout << -1;
    }
    



    return 0;
}
