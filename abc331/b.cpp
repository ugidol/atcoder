#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,S,M,L;
  cin >> N >> S >> M >> L ;
  vector<int> dp(100+12+1,1e6+1);
  dp[6] = S;
  dp[8] = M;
  dp[12] = min(S*2,L);
  for(int i=13;i<=100+12;i++){
    dp[i] = min({
        dp[i-6] + S,
        dp[i-8] + M,
        dp[i-12] + L
        });
  }
  int ans = 1e6+1;
  for(int i=N;i<N+12;i++){
    ans = min(ans,dp[i]);
  }
  cout << ans << endl;
  return 0;
}
