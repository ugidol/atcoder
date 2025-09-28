#include <bits/stdc++.h>
using namespace std;
int main(void){
  int M,D;
  cin >> M >> D;
  int y,m,d;
  cin >> y >> m >> d;
  d += 1;
  if ( d > D ) {
    m += 1;
    d = 1;
  }
  if ( m > M ) {
    y += 1;
    m = 1;
  }
  cout << y << ' ' << m << ' ' << d << endl;
  return 0;
}
