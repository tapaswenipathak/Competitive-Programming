#include <iostream>
using namespace std;
int main()
{
    string p;
    bool flag = true;

    cin >> p;

    for (int i = 0; p[i]; ++i){
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            cout << "YES";
            flag = false;
            break;
        }
    }

    if (flag){
        cout << "NO";
    }
    return 0;
}
