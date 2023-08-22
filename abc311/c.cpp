#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<set<int>> G(N);
  vector<bool> visited(N);
  for(int i=0;i<N;i++){
    int n;
    cin >> n;
    G[i].insert(n-1);
  }
  //
  int root = -1;
  auto dfs = [&](auto f, int n) -> void {
    visited[n] = true;
    for(auto g : G[n]){
      if ( visited[g] ) {
        if ( root < 0 ) {
          root = g;
        }
      }
      else {
        f(f,g);
      }
    }
  };
  //
  for(int i=0;i<N;i++){
    if ( visited[i] ) {
    }
    else {
      dfs(dfs,i);
    }
  }
  vector<int> ans;
  fill(visited.begin(), visited.end(), false);
  auto dfs2 = [&](auto f, int n) -> void {
    visited[n] = true;
    ans.push_back(n+1);
    for(auto g : G[n]){
      if ( visited[g] ) {
      }
      else {
        f(f,g);
      }
    }
  };
  dfs2(dfs2,root);
  //
  cout << ans.size() << endl;
  for(auto itr : ans){
    cout << itr << ' ';
  }
  cout << endl;
  //
  return 0;
}
