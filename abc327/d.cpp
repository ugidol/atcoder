#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  vector<int> A(M);
  for(int i=0;i<M;i++){
    int a;
    cin >> a;
    a--;
    A[i] = a;
  }
  vector<int> B(M);
  for(int i=0;i<M;i++){
    int b;
    cin >> b;
    b--;
    B[i] = b;
  }
  vector<vector<int>> G(N,vector<int>());
  for(int i=0;i<M;i++){
    G[ A[i] ].push_back( B[i] );
    G[ B[i] ].push_back( A[i] );
  }
  vector<int> visited(N,-1);
  function<bool(int n,int x)> dfs = [&](int n,int x){
    bool ret = true;
    visited[n] = x % 2 ;
    vector<int> nodes = G[n];
    for(int i=0;i<(int)nodes.size();i++){
      int nn = nodes[i];
      if ( visited[nn] == -1 ) {
        ret = dfs(nn,(x%2)+1);
      }
      else {
        if ( visited[nn] == visited[n] ){
          ret = false;
        }
      }
      if ( ! ret ) {
        break;
      }
    }
    return ret;
  };
  string ans = "Yes";
  for(int i=0;i<N;i++){
    if ( visited[i] == -1 ) {
      bool b = dfs(i,0);
      if ( ! b ) {
        ans = "No";
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
