#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long N,M,K;
  cin >> N >> M >> K;
  if ( N > M ) {
    swap(N,M);
  }
  long long lcm = std::lcm(N,M) ;
  function<bool(long long)> f = [&](long long x){
    long long v = ( x / N ) + ( x / M ) - ( ( x / lcm ) * 2 ) ;
    return v >= K ;
  };
  long long left = 0;
  long long right = 1e18;
  while(abs(left-right)>1){
    long long mid = ( left + right ) / 2 ;
    if ( f(mid) ) {
      right = mid;
    }
    else {
      left = mid;
    }
  }
  long long ans = right;
  cout << ans << endl;
  return 0;
}
