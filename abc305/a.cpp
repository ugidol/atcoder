#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  int m = N % 5 ;
  int ans = 0;
  if ( m < 3 ) {
    ans = N - m ;
  }
  else {
    ans = N + ( 5 - m ) ;
  }
  cout << ans << endl;
  return 0;
}
