#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W,N;
  cin >> H >> W >> N;
  string T;
  cin >> T;
  vector<vector<char>> G(H,vector<char>(W,' '));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin >> G[i][j];
    }
  }
#ifdef DEBUG
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cout << G[i][j] ;
    }
    cout << endl;
  }
#endif
  function<bool(int,int,int)> dfs = [&](int x,int y,int n){
    if ( G[x][y] == '#' ) {
      return false;
    }
    if ( n == N && G[x][y] == '.' ) {
      return true;
    }
    bool ret = false;
    char c = T[n];
    if ( c == 'L' ) {
      ret = dfs(x,y-1,n+1);
    }
    else if ( c == 'R' ) {
      ret = dfs(x,y+1,n+1);
    }
    else if ( c == 'U' ) {
      ret = dfs(x-1,y,n+1);
    }
    else if ( c == 'D' ) {
      ret = dfs(x+1,y,n+1);
    }
    return ret;
  };
  int ans = 0;
  for(int i=1;i<(H-1);i++){
    for(int j=1;j<(W-1);j++){
      int n = 0;
      bool b = dfs(i,j,n);
      if ( b ) {
        ans += 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
