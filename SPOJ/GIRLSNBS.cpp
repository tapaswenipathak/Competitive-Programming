#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
  int G, B, mgr;

  while( scanf("%d %d", &G, &B) && (G != -1) && (B != -1) ){
    mgr = ceil( ((float)max(G, B) / (float)(min(G, B) + 1)) );
    cout << mgr << "\n";

  }
  return 0;
}
