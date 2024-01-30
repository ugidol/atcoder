#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,X;
  cin >> N >> X ;
  X -= 1;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
    A[i] -= 1;
  }
  set<int> visited;
  function<int(int)> dfs = [&](int x){
    visited.insert(x);
    int next = A[x];
    if ( visited.find(next) == visited.end() ) {
      dfs(next);
    }
    return 0;
  };
  dfs(X);
  int ans = visited.size();
  cout << ans << endl;
  return 0;
}
