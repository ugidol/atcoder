#include <bits/stdc++.h>
using namespace std;
void dfs(set<int> &st, vector<set<int>> &G, vector<bool> &visited, int n){
  visited[n] = true;
  if ( G[n].size() == 0 ) {
    st.insert(n);
    return ;
  }
  else {
    for(auto itr : G[n]){
      if ( visited[itr] ) {
        ;
      }
      else {
        dfs(st,G,visited,itr);
      }
    }
  }
}
int main(void){
  int N,M;
  cin >> N >> M;
  vector<set<int>> G(N+1);
  for(int i=0;i<M;i++){
    int A,B;
    cin >> A >> B;
    G[B].insert(A);
  }
  vector<bool> visited(N+1);
  set<int> st;
  for(int i=0;i<N;i++){
    if ( visited[i+1] ) {
      ;
    }
    else {
      dfs(st,G,visited,i+1);
    }
  }
  int ans = -1;
  if ( st.size() == 1 ) {
    ans = *st.begin();
  }
  cout << ans << endl;
  return 0;
}
