#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(auto &itr:A){
    cin >> itr;
  }
  map<int,vector<int>> mp;
  for(int i=1;i<N;i++){
    int p;
    cin >> p;
    p--;
    mp[p].push_back(i);
  }
  vector<bool> visited(N,false);
  long long sm = 0;
  function<void(int)> dfs = [&](int v){
#ifdef DEBUG
    fprintf(stderr,"%d\n",v+1);
#endif
    visited[v] = true;
    sm += A[v];
    vector<int> nodes = mp[v];
    for(auto itr:nodes){
      if ( visited[itr] ) {
        continue;
      }
      dfs(itr);
    }
  };
  dfs(0);
  string ans = "0";
  if ( sm < 0 ) {
    ans = "-";
  }
  else if ( sm > 0 ) {
    ans = "+";
  }
  cout << ans << endl;
  return 0;
}
