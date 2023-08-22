#include <bits/stdc++.h>
using namespace std;
int N,D;
vector<pair<int,int>> vec;
map<pair<int,int>,bool> visited;
double distance(pair<int,int> &a, pair<int,int> &b){
  return ( sqrt( pow(a.first - b.first,2) + pow(a.second - b.second,2 ) ) );
}
vector<pair<int,int>> func(pair<int,int> &p){
  vector<pair<int,int>> ret;
  for(auto itr : vec){
    if ( itr.first == p.first && itr.second == p.second ) { 
      continue;
    }
    double d = distance(p,itr);
    if ( d <= D ) {
      ret.push_back(itr);
    }
  }
  return ret;
}
void dfs(pair<int,int> &p){
  if ( visited[p] ) {
    return ;
  }
  visited[p] = true;
  vector<pair<int,int>> nodes = func(p);
  for(auto itr : nodes ) {
    dfs(itr);
  }
}
int main(void){
  cin >> N >> D;
  vec.resize(N);
  for(int i=0;i<N;i++){
    int x,y;
    cin >> x >> y ;
    pair<int,int> p = make_pair(x,y);
    vec[i] = p;
    visited[p] = false;
  }
  dfs(vec[0]);
  for(int i=0;i<N;i++){
    string ans = "No";
    if ( visited[vec[i]] ) {
      ans = "Yes";
    }
    cout << ans << endl;
  }
  return 0;
}
