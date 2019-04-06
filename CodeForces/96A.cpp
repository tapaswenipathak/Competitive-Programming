#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string situation;
    int count0 = 0, count1 = 0;

    cin >> situation;

    for (int i = 0; situation[i]; ++i){
        if (situation[i] == '0'){
            ++count0;
            if (count0 >= 7){
                break;
            }
            count1 = 0;
        }
        if (situation[i] == '1'){
            ++count1;
            if (count1 >= 7){
                break;
            }
            count0 = 0;
        }
    }

    if (count0 >= 7 || count1 >= 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }


    return 0;
}
