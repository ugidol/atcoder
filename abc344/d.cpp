#include <bits/stdc++.h>
using namespace std;
int main(void){
  string T;
  cin >> T;
  T.insert(T.begin(),' ');
  int N;
  cin >> N;
  vector<vector<string>> S(N,vector<string>());
  for(int i=0;i<N;i++){
    int A;
    cin >> A;
    for(int j=0;j<A;j++){
      string s;
      cin >> s;
      S[i].push_back(s);
    }
  }
  //
  const unsigned int INF = -1;
  vector<vector<unsigned int>> dp(N+1,vector<unsigned int>(T.size(),INF));
  dp[0][0] = 0;
  for(int i=1;i<=N;i++){
    /* N番目の袋を選択しなかった場合の支払い金額 */
    for(int j=0;j<(int)T.size();j++){
      if ( dp[i-1][j] != INF ) {
        dp[i][j] = dp[i-1][j];
      }
    }
    vector<string> vec = S[i-1];
    for(auto s:vec){
      /* 文字列探索
       * (複数回HitするかもなのでLoop)
      */
      size_t pos = T.find(s);
      while(pos!=string::npos){
        size_t left = pos;
        left -= 1;
        size_t right = left + s.size();
#ifdef DEBUG
        fprintf(stderr,"%s:(%lu,%lu)\n",s.c_str(),left,right);
#endif
        if ( dp[i-1][left] != INF ) {
          dp[i][right] = min(dp[i][right],dp[i-1][left]+1);
        }
        pos = T.find(s, pos+1);
      }
    }
  }
#ifdef DEBUG
  {
    fprintf(stderr,"T=%s\n",T.c_str());
    for(size_t i=0;i<dp.size();i++){
      for(size_t j=0;j<dp[i].size();j++){
        if ( dp[i][j] == INF ) {
          fprintf(stderr,"INF,");
        }
        else {
          fprintf(stderr,"%3d,",dp[i][j]);
        }
      }
      fprintf(stderr,"\n");
    }
    fprintf(stderr,"N=%d\n",N);
    fprintf(stderr,"T.size=%lu\n",T.size());
  }
#endif
  int ans = dp[N][T.size()-1];
  cout << ans << endl;
  return 0;
}
