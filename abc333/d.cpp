#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<vector<int>> G(N,vector<int>());
  for(int i=0;i<(N-1);i++){
    int u,v;
    cin >> u >> v ;
    u--;v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  int ans = 1;
  if ( G[0].size() <= 1 ) {
    ;
  }
  else {
    multiset<int> st;
    for(int i=0;i<(int)(G[0].size());i++){
      int cnt = 0;
      set<int> visited;
      visited.insert(0);
      //
      function<void(int,int&)> dfs = [&](int n, int &cnt){
        cnt += 1;
        visited.insert(n);
        for(auto node:G[n]){
          if ( visited.find(node) == visited.end() ) {
            dfs(node,cnt);
          }
        }
        return;
      };
      //
      dfs(G[0][i],cnt);
#ifdef DEBUG
      fprintf(stderr,"%d\n",cnt);
#endif
      st.insert(cnt);
    }
    auto p = st.end();
    p--;
    st.erase(p);
    for(auto itr:st){
      ans += itr;
    }
  }
  cout << ans << endl;
  return 0;
}
