#include <iostream>
#include <cstring>
using namespace std;
int main(){
  int n, fval = 0;
  string stmt;

  cin >> n;

  while( n-- ){

    cin >> stmt;

    if( (stmt[0] == 'X') && (stmt[1] == '+') && (stmt[2] == '+') ){
      ++fval;
    } 
    else if( (stmt[0] == '+') && (stmt[1] == '+') && (stmt[2] == 'X') ){
      ++fval;
    }
    else if( (stmt[0] == 'X') && (stmt[1] == '-') && (stmt[2] == '-') ){
      --fval;
    } 
    else if( (stmt[0] == '-') && (stmt[1] == '-') && (stmt[2] == 'X') ){
      --fval;
    }

  }
  
  cout << fval;
  return 0;
}
