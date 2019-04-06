#include <iostream>
using namespace std;
int main()
{
  int n, holding = 0, a = 0, b = 0, capacity = 0;

  cin >> n;

  cin >> a >> b;
  holding = b - a;
  for( int i = 0; i < n - 1; ++i ){
    cin >> a >> b;
    if( capacity < holding ){
      capacity = holding;
    }

    holding = holding + b - a;
  }

  cout << capacity;


  return 0;
}
