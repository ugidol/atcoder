#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,Q;
  cin >> N >> Q ;
  vector<vector<int>> nodes(N,vector<int>());
  for(int i=0;i<N-1;i++){
    int a,b;
    cin >> a >> b;
    a -= 1;
    b -= 1;
    nodes[a].push_back(b);
    nodes[b].push_back(a);
  }
  set<int> visited;
  map<int,int> mp;
  function<void(int,int)> dfs = [&](int n,int num){
    visited.insert(n);
    mp[n] = num % 2 ;
    for(auto node : nodes[n]){
      if ( visited.find(node) != visited.end() ) {
        continue;
      }
      dfs(node,num+1);
    }
  };
  dfs(0,0);
#ifdef DEBUG
  for(auto itr:mp){
    fprintf(stderr,"[%d]:%d\n",itr.first,itr.second);
  }
#endif
  vector<string> vec;
  for(int i=0;i<Q;i++){
    int c,d;
    cin >> c >> d;
    c -= 1;
    d -= 1;
    string ans = "Road";
    if ( mp[c] == mp[d] ) {
      ans = "Town";
    }
    vec.push_back(ans);
  }
  for(auto itr:vec){
    cout << itr << endl;
  }
  return 0;
}
