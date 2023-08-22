#include <bits/stdc++.h>
using namespace std;
int H,W;
vector<vector<bool>> visited;
void dfs(vector<vector<char>> &vec, int i, int j,int &num){
  if ( i < 0 || i >= H ) {
    return ;
  }
  if ( j < 0 || j >= W ) {
    return ;
  }
  if ( visited[i][j] ) {
    return ;
  }
  visited[i][j] = true;
  if ( vec[i][j] == '.' ) {
    return ;
  }
  if ( vec[i][j] == '#' ) {
    num += 1;
  }
  dfs(vec,i-1,j-1,num);
  dfs(vec,i-1,j+1,num);
  dfs(vec,i+1,j-1,num);
  dfs(vec,i+1,j+1,num);
  return ;
}
int main(void){
  cin >> H >> W;
  visited.resize(H,vector<bool>(W));
  vector<vector<char>> C(H,vector<char>(W));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      char c ;
      cin >> c;
      C[i][j] = c;
    }
  }
  //
  map<int,int> mp;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      int cnt = 0;
      dfs(C,i,j,cnt);
#ifdef DEBUG
      fprintf(stderr,"[%d]\n",cnt);
#endif
      if ( cnt > 0 ) {
        mp[(cnt-1)/4] += 1;
      }
    }
  }
  for(int i=1;i<=(min(H,W));i++){
    cout << mp[i] << ' ';
  }
  cout << endl;
  return 0;
}
