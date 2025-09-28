#include <bits/stdc++.h>
using namespace std;
int main(void){
  int X,Y,N;
  cin >> X >> Y >> N;
  double r = (double)Y / (double)3.0 ;
  long ans = 0;
  if ( r < (double)X ){
    ans = ( N / 3 ) * Y + ( N % 3 ) * X ;
  }
  else {
    ans = N * X ;
  }
  cout << ans << endl;
  return 0;
}
