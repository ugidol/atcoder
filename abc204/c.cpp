#include <bits/stdc++.h>
using namespace std;
int N,M;
vector<set<int>> vec;
set<pair<int,int>> visited;
map<int,int> memo;
int dfs(int a, int b){
  if ( visited.find(make_pair(a,b)) != visited.end() ) {
    return 0;
  }
  visited.insert(make_pair(a,b));
  int ret = 1;
  for(auto itr : vec[b]){
    ret += dfs(a,itr);
  }
  return ret;
}
int main(void){
  cin >> N >> M ;
  vec.resize(N);
  for(int i=0;i<M;i++){
    int A,B;
    cin >> A >> B ;
    vec[A-1].insert(B-1);
  }
  int ans = 0;
  for(int i=0;i<N;i++){
    ans += dfs(i,i);
  }
  cout << ans << endl;
  return 0;
}
