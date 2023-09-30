#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long N;
  cin >> N;
  vector<long long> X(N);
  vector<long long> Y(N);
  vector<long long> Z(N);
  for(int i=0;i<N;i++){
    cin >> X[i] >> Y[i] >> Z[i] ;
  }
  function <long long(long long)> f = [&](long long i){
    long long x = X[i];
    long long y = Y[i];
    return max(0ll,((( x + y + 1ll) / 2 ) ) - x );
  };
  vector<vector<long long>> dp(N+1,vector<long long>(1e5,LLONG_MAX));
  dp[0][0] = 0;
  for(int i=0;i<N;i++){
    long long v = f(i);
    long long z = Z[i];
    for(int j=0;j<1e5;j++){
      if ( dp[i][j] < LLONG_MAX ) {
        dp[i+1][j] = min(dp[i][j],dp[i+1][j]);
        dp[i+1][j+z] = min(dp[i+1][j+z],dp[i][j] + v);
      }
    }
  }
  long long right = accumulate(Z.begin(), Z.end(), 0);
  long long left = ( right + 1 ) / 2 ;
  long long ans = LLONG_MAX;
  for(long long i = left ; i <= right; i++){
    ans = min(ans,dp[N][i]);
  }
  cout << ans << endl;

  return 0;
}
