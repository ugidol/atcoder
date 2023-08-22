#include <bits/stdc++.h>
using namespace std;
pair<int,int> bfs(vector<set<int>> &node, int arg){
  vector<int> dist(node.size(),-1);

  queue<int> que;
  que.push(arg);
  dist[arg] = 0;
  while( ! que.empty() ) {
    int v = que.front();
    que.pop();
    set<int> &st = node[v];
    for(auto itr : st){
      if ( dist[itr] != -1 ) {
        continue;
      }
      dist[itr] = dist[v] + 1;
      que.push(itr);
    }
  }
  pair<int,int> ret = make_pair(0,0);
  for(int i=1;i<(int)dist.size();i++){
    if ( ret.second < dist[i] ) {
      ret.first = i;
      ret.second = dist[i];
    }
  }
  return ret ;
}
int main(void){
  int N1, N2, M;
  cin >> N1 >> N2 >> M;
  vector<set<int>> node(N1+N2+1);
  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b ;
    node[a].insert(b);
    node[b].insert(a);
  }
  //
  pair<int,int> s1 = bfs(node,1);
  //
  pair<int,int> s2 = bfs(node,N1+N2);
  //
  int ans = s1.second + s2.second ;
  cout << ans + 1 << endl;
  return 0;
}
