#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,A,X,Y;
  cin >> N >> A >> X >> Y ;
  int ans = 0;
  if ( N <= A ) {
    ans += N * X ;
  }
  else {
    ans += A * X ;
    ans += (N-A)*Y;
  }
  cout << ans << endl;
  return 0;
}
