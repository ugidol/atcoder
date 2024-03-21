#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  vector<vector<int>> G(N,vector<int>());
  for(int i=0;i<M;i++){
    int A,B;
    cin >> A >> B;
    A -= 1;
    B -= 1;
    G[B].push_back(A);
  }
  //
  set<int> st;
  function<void(int)> dfs = [&](int v){
    set<int> visited;
    stack<int> stk;
    stk.push(v);
    while( ! stk.empty() ) {
      int n = stk.top();stk.pop();
      visited.insert(n);
      vector<int> &nodes = G[n];
      if ( nodes.size() == 0 ) {
        st.insert(n);
      }
      else {
        for(auto n:nodes){
          if ( visited.count(n) > 0 ) {
            continue;
          }
          stk.push(n);
        }
      }
    }
    return ;
  };
  for(int i=0;i<N;i++){
    dfs(i);
  }
  int ans = -1;
  if ( st.size() == 1 ) {
    ans = *st.begin();
    ans += 1;
  }
  cout << ans << endl;
  return 0;
}
