#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
  int n, nooftaxi = 0, sum = 0, s = 0;

  cin >> n;
  int group[5] = {0};
  
  while( n-- ){
    cin >> s;
    group[s] += 1;
  }
  
  nooftaxi = group[2] / 2 + group[3] + group[4];
  group[1] -= group[3];

  if( group[2] % 2 == 1 ){
    ++nooftaxi;
    group[1] -= 2;
  }
  
  if( group[1] > 0 ){
    nooftaxi += (group[1] + 3) / 4;
  }

  cout << nooftaxi;

  return 0;
}
