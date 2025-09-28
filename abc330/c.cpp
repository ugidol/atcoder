#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long D;
  cin >> D;
  long long ans = LLONG_MAX;
  for(long long x=0;x*x<=2*1e12;x++){
    long long c = ( x * x ) - D ;
    if ( c >= 0 ) {
      long long ans1 = abs( c );
      ans = min(ans,ans1);
    }
    else {
      //
      long long y1 = floor(sqrt(abs(c)));
      long long ans1 = abs(c + y1 * y1);
      //
      long long y2 = ceil(sqrt(abs(c)));
      long long ans2 = abs(c + y2 * y2);
      //
      ans = min({ ans, ans1, ans2});
    }
  }
  cout << ans << endl;
  return 0;
}
