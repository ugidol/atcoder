#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  vector<vector<int>> dp(S.size()+1,vector<int>(S.size()+1,0));
  dp[0][0] = 1;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    for(int j=0;j<(int)S.size();j++){
      if ( c == '(' ) {
        dp[i+1][j+1] += dp[i][j];
        dp[i+1][j+1] %= 998244353;
      }
      else if ( c == ')' ) {
        if ( j > 0 ) {
          dp[i+1][j-1] += dp[i][j];
          dp[i+1][j-1] %= 998244353;
        }
      }
      else {
        dp[i+1][j+1] += dp[i][j];
        dp[i+1][j+1] %= 998244353;
        if ( j > 0 ) {
          dp[i+1][j-1] += dp[i][j];
          dp[i+1][j-1] %= 998244353;
        }
      }
    }
  }
  int ans = dp[S.size()][0];
  cout << ans << endl;
  return 0;
}
