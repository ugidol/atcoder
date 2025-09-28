#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<string> S(N);
  vector<vector<int>> P(0,vector<int>(2));
  for(int i=0;i<N;i++){
    cin >> S[i];
    for(int j=0;j<N;j++){
      if ( S[i][j] == 'P' ) {
        P.push_back({i,j});
      }
    }
  }
  vector<vector<int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};
  //
  //
  vector<vector<vector<int>>> vec(N,vector<vector<int>>(N,vector<int>(2)));
  for(int pp=0;pp<2;pp++){
    vector<int> p = P[pp];
    for(int i=0;i<4;i++){
      int d = i;
      int mx = 0;
      function<void(int,int,int,int,int)> dfs = [&](int x, int y,int d,int num,int cnt){
        int nx = x + dir[d][0];
        int ny = y + dir[d][1];
        if ( nx >= 0 && nx < N && ny >= 0 && ny < N && S[nx][ny] != '#' ) {
          dfs(nx,ny,d,num,cnt+1);
        }
        else {
          d = ( d + 1 ) % 4 ;
          nx = x + dir[d][0];
          ny = y + dir[d][1];
          if ( nx >= 0 && nx < N && ny >= 0 && ny < N && S[nx][ny] != '#' && num <= 1) {
            dfs(nx,ny,d,num+1,cnt+1);
          }
        }
        vec[x][y][pp] = max(vec[x][y][pp],cnt);
        return ;
      };
      dfs(p[0],p[1],d,0,0);
      cout << mx << endl;
    }
  }
  return 0;
}
