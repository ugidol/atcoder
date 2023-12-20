#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,X;
  cin >> N >> X ;
  vector<pair<int,int>> vec(N+1);
  for(int i=1;i<=N;i++){
    int A,B;
    cin >> A >> B;
    pair<int,int> p = make_pair(A,B);
    vec[i] = p;
  }
  vector<vector<bool>> dp(N+1,vector<bool>(X+1));
  dp[0][0] = true;
  for(int i=1;i<=N;i++){
    int a = vec[i].first;
    int b = vec[i].second;
    for(int x=0;x<=X;x++){
      if ( dp[i-1][x] == true ) {
        for(int bb=0;bb<=b;bb++){
          int xx = x+bb*a;
          if ( xx > X ) {
            break;
          }
          dp[i][xx] = true;
        }
      }
    }
  }
  string ans = "No";
  if ( dp[N][X] ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
