#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n, k, noofpart = 0, qscore = 0;

  cin >> n >> k;

  int score[n];

  for( int i = 0; i < n; ++i ){
    cin >> score[i];
  }

  sort( score, score + n );

  qscore = score[k - 1];

  for( int i = n - 1; (score[i] >= qscore) && (i >= 0); --i ){
    ++noofpart;
  }
  if( qscore != 0 ){
    cout << noofpart;
  }
  else{
    cout << "0";
  }
  return 0;
}
