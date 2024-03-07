#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  vector<vector<int>> G(N,vector<int>());
  for(int i=0;i<M;i++){
    int U,V;
    cin >> U >> V;
    U -= 1;
    V -= 1;
    G[U].push_back({V});
    G[V].push_back({U});
  }
  int ans = 0;
  for(int i=0;i<N;i++){
    int a = i;
    for(int j=i+1;j<N;j++){
      int b = j;
      if ( find(G[i].begin(), G[i].end(), b) == G[i].end() ) {
        continue;
      }
      for(int k=j+1;k<N;k++){
        int c = k;
        if ( find(G[j].begin(), G[j].end(), c) == G[j].end() ) {
          continue;
        }
        if ( find(G[k].begin(), G[k].end(), a) == G[k].end() ) {
          continue;
        }
        ans += 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
