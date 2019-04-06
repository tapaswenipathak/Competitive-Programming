#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main(){
  int n;
  string word;
  scanf( "%d", &n );

  while( n-- ){
    cin >> word;

    if( word.length() > 10 ){
      cout << word[0] << word.length() - 2 << word[word.length() - 1] << "\n";
    }
    else{
      cout << word << "\n";
    }
  }
  return 0;
}
