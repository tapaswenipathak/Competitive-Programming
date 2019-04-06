#include <iostream>
using namespace std;

int main()
{
    int t = 0;

    cin >> t;

    while (t--){

        bool flag = true;
        long long int num1 = 0, num2 = 0;
        char op = '\0';

        while (op != '='){
            if (flag){
                cin >> num1;
                cin >> op;
                cin >> num2;
                flag = false;
            }
           

            if (op == '+'){
                num1 = num1 + num2;
            }
            if (op == '*'){
                num1 = num1 * num2;
            }
            if (op == '/'){
                num1 = num1 / num2;
            }
            if (op == '-'){
                num1 = num1 - num2;
            }
            
            if (!flag){
                cin >> op;
                if (op == '='){
                    continue;
                }
                cin >> num2;
            }
        }

        cout << num1 << "\n";
    }

    return 0;
}

