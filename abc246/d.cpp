#include <bits/stdc++.h>
using namespace std;
int main(void){
  long N;
  cin >> N;
  /*
   * X = a^3 + a^2*b + a*b^2 + b^3 ;
   */
  function<long(long,long)> f = [&](long a, long b){
    return a * a * a + a * a * b + a * b * b + b * b * b ;
  };
  long ans = 3*1e18+1;
  /*
   * aを固定（0～1e6)
   */
  for(long a=0;a<=1e6;a++){
    /*
     * bを二分探索(条件を満たす最小)
     */
    long left = -1;
    long right = 1e6;
    while(abs(right-left)>1){
      long mid = ( left + right ) / 2;
      long x = f(a,mid);
      if ( x >= N ) {
        right = mid;
      }
      else {
        left = mid;
      }
    }
    long b = right;
    /*
     * f(a,b)のminで更新
     */
    ans = min(ans,f(a,b));
  }
  cout << ans << endl;
  return 0;
}
