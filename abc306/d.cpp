#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(void){
  ll N;
  cin >> N;
  vector<vector<ll>> dp(N+1,vector<ll>(2));
  for(ll i=0;i<N;i++){
    ll x,y;
    cin >> x >> y;
    if ( x == 0 ) {
      dp[i+1][0] = max({dp[i][0],dp[i][1]+y,dp[i][0]+y});
      dp[i+1][1] = dp[i][1];
    }
    else {
      dp[i+1][0] = dp[i][0];
      dp[i+1][1] = max(dp[i][0]+y,dp[i][1]);
    }
  }
  ll ans = max(dp[N][0],dp[N][1]);
  cout<< ans << endl;
  return 0;
}
