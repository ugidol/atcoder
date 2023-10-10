#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long X,Y,Z;
  cin >> X >> Y >> Z;
  string S;
  cin >> S;
  vector<vector<long long>> dp(S.size()+1,vector<long long>(2,1e18));
  dp[0][0] = 0;
  for(int i=1;i<=(int)S.size();i++){
    char c = S[i-1];
    if ( c == 'a' ) {
      dp[i][0] = min({dp[i-1][0]+X    ,
                      dp[i-1][1]+Z+X});

      dp[i][1] = min({dp[i-1][0]+Z+Y  ,
                      dp[i-1][1]+Y    });
    }
    else if ( c == 'A' ) {
      dp[i][0] = min({dp[i-1][0]+Y    ,
                      dp[i-1][1]+Z+Y  });

      dp[i][1] = min({dp[i-1][0]+Z+X  ,
                      dp[i-1][1]+X    });
    }
#ifdef DEBUG
  fprintf(stderr,"dp[%d]{%lld,%lld}\n",i,dp[i][0],dp[i][1]);
#endif
  }
  long long ans = min(dp[S.size()][0],dp[S.size()][1]);
  cout << ans << endl;
  return 0;
}
