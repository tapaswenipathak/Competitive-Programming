#include <cstdio>
#include <iostream>
using namespace std;

int main(){
  long long int n, m, a;
  
  cin >> n >> m >> a;

  long long int fs1 = n / a;
  long long int fs2 = m / a;

  if( n % a != 0 ){
    ++fs1;
  }
  if( m % a != 0 ){
    ++fs2;
  }

  long long int tfs = fs1 * fs2;

  cout << tfs;

  return 0;
}
