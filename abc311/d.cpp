#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};
int main(void){
  int N,M;
  cin >> N >> M;
  vector<string> matrix(N);
  for(auto &itr:matrix){
    cin >> itr;
  }
  set<pair<int,int>> visited;
  /*
   *
   */
  function<void(pair<int,int>)> dfs = [&](pair<int,int> pos){
    matrix[pos.first][pos.second] = 'x';
    visited.insert({pos.first,pos.second});
    for(int i=0;i<(int)dir.size();i++){
      int x = pos.first;
      int y = pos.second;
      pair<int,int> d = dir[i%dir.size()];
      while ( matrix[x+d.first][y+d.second] != '#' ) {
        x += d.first;
        y += d.second;
        matrix[x][y] = 'x';
      }
      if ( visited.find({x,y}) == visited.end() ) {
        dfs({x,y});
      }
    }
    return ;
  };
  dfs({1,1});
  int ans = 0;
  for(auto itr:matrix){
    ans += count(itr.begin(),itr.end(),'x');
  }
  cout << ans << endl;
#ifdef DEBUG
  for(auto itr:matrix){
    cout << itr << endl;
  }
#endif
  return 0;
}

