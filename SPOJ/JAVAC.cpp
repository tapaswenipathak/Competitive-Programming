
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cctype>
// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

// Useful constants
#define INF                         (int)1e9
#define EPS                         1e-9

// Useful container manipulation / traversal macros
#define forall(i,a,b)               for(int i=a;i<b;i++)

using namespace std;

int main()
{
    string identifier;
    while (cin >> identifier){
    
        int underscore = 0;
        bool maybejava = false, maybecpp = false, done = false, alllower = false;;
    
        if (isupper(identifier[0]) || identifier[0] == '_'){
            cout << "Error!\n";
            done = true;
        }
        for (int i = 0; identifier[i] && !done; ++i){
            if (identifier[i] == '_'){
                maybecpp = true;
                if (identifier[i + 1] == '_'){
                    underscore = 2;
                }
            }

            else if (isupper(identifier[i])){
                maybejava = true;
            }
        }

        if (((maybejava && maybecpp) || (underscore > 1)) && !done){
            done = true;
            cout << "Error!\n";
        }
        if ((identifier[identifier.length() - 1] == '_') && !done){
            done = true;
            cout << "Error!\n";
        }

        if (maybejava && !done){
            for (int i = 0; identifier[i] && maybejava; ++i){
                if (islower(identifier[i])){
                    cout << identifier[i];
                }
                if (isupper(identifier[i])){
                    cout << "_" << (char)tolower(identifier[i]);
                }
                if (identifier[i] == '_'){
                    maybejava = false;
                    cout << "Error!";
                }
            }
            done = true;
            cout << "\n";
        }

        if (maybecpp && !done){
            for (int i = 0; identifier[i] && maybecpp; ++i){
                if (islower(identifier[i])){
                    cout << identifier[i];
                }
                else if (identifier[i] == '_'){
                    identifier[i + 1] = (char)toupper(identifier[i + 1]);
                    cout << identifier[i + 1];
                    ++i;
                }
                else if (isupper(identifier[i])){
                    maybecpp = false;
                    cout << "Error!";
                }
            }
            done = true;
            cout << "\n";
        }

        if (!done){
            for (int i = 0; identifier[i]; ++i){
                if (islower(identifier[i])){
                    alllower = true;
                }
            }
        }

        if (alllower && !done){
            cout << identifier << "\n";
        }
    }

    return 0;

}
