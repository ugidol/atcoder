#include <bits/stdc++.h>
using namespace std;
vector<bool> visited;
vector<vector<int>> nodes;
set<pair<int,int>> paths;
void dfs(int n){
  visited[n] = true;
  for(auto itr : nodes[n] ) {
    if ( visited[itr] ) {
      ;
    }
    else {
      int a = n;
      int b = itr ;
      if ( a > b ) {
        swap(a,b);
      }
      pair<int,int> p = make_pair(a,b);
      paths.erase(p);
      dfs(itr);
    }
  }
}
int main(void){
  int N,M;
  cin >> N >> M ;
  nodes.resize(N);
  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b ;
    nodes[a-1].push_back(b-1);
    nodes[b-1].push_back(a-1);
    if ( a > b ) {
      swap(a,b);
    }
    pair<int,int> p = make_pair(a-1,b-1);
    paths.insert(p);
  }
  visited.resize(N);
  for(int i=0;i<N;i++){
    if ( ! visited[i] ) {
      dfs(i);
    }
  }
  cout << paths.size() << endl;
  return 0;
}
