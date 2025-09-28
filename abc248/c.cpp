#include <bits/stdc++.h>
using namespace std;
int main(void){
    int N,M,K;
    cin >> N >> M >> K;
    vector<vector<int>> dp(N+1,vector<int>(K+1,0));
    dp[0][0] = 1;
    for(int i=0;i<N;i++){
      for(int j=0;j<K;j++){
        for(int m=1;m<=M;m++){
          if ( j+m <= K ) {
            dp[i+1][j+m] += dp[i][j];
            dp[i+1][j+m] %= 998244353;
          }
        }
      }
    }
    long ans = 0;
    for(int j=0;j<=K;j++){
      ans += dp[N][j];
      ans %= 998244353;
    }
    cout << ans << endl;
    return 0;
}
