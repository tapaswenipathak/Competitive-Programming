#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  int n, j = 1;

  cin >> n;
  
  string s, new_s;
  
  cin >> s;

  new_s[0] = s[0];
  for( int i = 1; s[i]; ++i ){
    if( s[i] != s[i - 1] ){
      new_s[j++] = s[i];
    }
  }
  cout << s.length() - j;

  return 0;
}
