#include <bits/stdc++.h>
using namespace std;

int main(void){
  string s ;
  cin >> s ;
  s.insert(0," ");
  string t = " chokudai" ;
  int dp[s.size()+1][t.size()+1];
  memset(&dp,0x00,sizeof(dp));
  for(size_t i=0;i<s.size();i++){
    dp[i][0] = 1 ; 
  }
  for(size_t i=1;i<=s.size();i++){
    for(size_t j=1;j<=t.size();j++){
      if ( s[i] == t[j] ) {
        dp[i][j] = ( dp[i-1][j-1] + dp[i-1][j] ) % 1000000007 ;
      }
      else {
        dp[i][j] = dp[i-1][j] % 1000000007 ;;
      }
    }
  }
  cout << dp[s.size()-1][t.size()-1] << endl ;
  return 0;
}
