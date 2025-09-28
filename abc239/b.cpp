#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long X;
  cin >> X;
  long long ans = 0;
  if ( X > 0 ) {
    ans = X / 10 ;
  }
  else {
    long long x = X * -1 ;
    ans = ( x + 10 - 1 ) / 10 ;
    ans *= -1 ;
  }
  cout << ans << endl;
  return 0;
}
