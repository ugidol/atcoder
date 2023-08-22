#include <bits/stdc++.h>
using namespace std;
long func(long v, long d){
  return (v / d ) * d ;
}
int main(void){
  long N;
  cin >> N;
  long ans = N;
  if ( ans < 1e3 ) {
    ;
  }
  else if ( ans < 1e4 ) {
    ans = func(ans,1e1);
  }
  else if ( ans < 1e5 ) {
    ans = func(ans,1e2);
  }
  else if ( ans < 1e6 ) {
    ans = func(ans,1e3);
  }
  else if ( ans < 1e7 ) {
    ans = func(ans,1e4);
  }
  else if ( ans < 1e8 ) {
    ans = func(ans,1e5);
  }
  else if ( ans < 1e9 ) {
    ans = func(ans,1e6);
  }
  cout << ans << endl;
  return 0;
}
