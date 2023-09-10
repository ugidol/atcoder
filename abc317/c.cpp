#include <bits/stdc++.h>
using namespace std;
int N,M;
vector<vector<int>> G;
int dfs(int from, int to, vector<int> &visited, int distance){
  if ( from == to ) {
    return distance;
  }
  int ret = 0;
  for(int i=0;i<N;i++){
    int c = G[from][i];
    if ( c == 0 ) {
      continue;
    }
    if ( find(visited.begin(), visited.end(), i) != visited.end() ) {
      continue;
    }
    visited.push_back(i);
    int tmp = dfs(i,to,visited,distance + c);
    visited.pop_back();
    ret = max(ret,tmp);
  }
  return ret;
}
int main(void){
  cin >> N >> M;
  G.resize(N,vector<int>(N,0));
  for(int i=0;i<M;i++){
    int A,B,C;
    cin >> A >> B >> C;
    G[A-1][B-1] = C;
    G[B-1][A-1] = C;
  }
  int ans = 0;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if ( i == j ) {
        continue;
      }
      vector<int> v(0);
      v.push_back(i);
      int tmp = dfs(i,j,v,0);
      v.pop_back();
      ans = max(ans,tmp);
    }
  }
  cout << ans << endl;
  return 0;
}
