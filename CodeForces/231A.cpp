#include <iostream>
using namespace std;
int main()
{
  int n, canbesolved = 0, iknow = 0, noofiknow = 0;
  bool flag = true;

  cin >> n;

  for( int i = 0; i < n; ++i ){
    flag = true;
    noofiknow = 0;
    iknow = 0;
    for( int j = 0; j < 3; ++j ){
      cin >> iknow;
      noofiknow += iknow;
      if( noofiknow >= 2 && flag ){
        ++canbesolved;
        flag = false;
      }
    }
  }


  cout << canbesolved;
  return 0;
}
