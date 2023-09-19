#include <bits/stdc++.h>
using namespace std;
class UF{
public:
  vector<int> parent;
  vector<int> size;
  map<pair<int,int>,pair<int,int>> mp;
  map<int,vector<int>> G;
  explicit UF(size_t sz)
      : parent(sz, 0) , size(sz,1) {
    for(int i=0;i<(int)parent.size();i++){
      parent[i] = i;
    }
  }
  int find(int v){
    int r = v;
    while (parent[r] != r ) {
      r = parent[r];
    }
    //
    int c = v;
    while (parent[c] != r) {
      int _c = parent[c];
      parent[c] = r;
      c = _c;
    }
    return r;
  }
  void unite(int v1, int v2, int x, int y){
    pair<int,int> pa = make_pair(v1,v2);
    pair<int,int> pb = make_pair(v2,v1);
    mp[pa] = {x,y};
    mp[pb] = {x*-1,y*-1};
    G[v1].push_back(v2);
    G[v2].push_back(v1);
    int p1 = find(v1);
    int p2 = find(v2);
    if (p1 == p2){
      return;
    }
    if (size[p1] <= size[p2]){
      parent[p2] = p1;
      size[p1] += 1;
    } else {
      parent[p1] = p2;
      size[p2] += 1;
    }
  }
  bool same(int v1, int v2){
    return (find(v1) == find(v2));
  }
  void dfs(int v, map<int,pair<long long, long long>> &visited, long long x, long long y){
    visited[v] = {x,y};
#ifdef DEBUG
      fprintf(stderr,"visited=[%d]{%lld,%lld}\n",v,x,y);
#endif
    for(auto node : G[v]){
#ifdef DEBUG
      fprintf(stderr,"node=[%d]\n",node);
#endif
      if ( visited.find(node) != visited.end() ) {
        continue;
      }
      else {
        pair<int,int> p = make_pair(v,node);
        int nx = mp[p].first;
        int ny = mp[p].second;
#ifdef DEBUG
        fprintf(stderr,"p=[{%d,%d}]={%d,%d}\n",v,node,nx,ny);
#endif
        x += nx;
        y += ny;
        dfs(node,visited,x,y);
        x -= nx;
        y -= ny;
      }
    }
  }
};

int main(void){
  int N,M;
  cin >> N >> M;
  UF uf(N);
  for(int i=0;i<M;i++){
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    a--;
    b--;
    uf.unite(a,b,x,y);
  }
  map<int, pair<long long,long long>> mp;
  uf.dfs(0,mp,0,0);
  for(int i=0;i<N;i++){
    bool b = uf.same(0,i);
    string ans = "undecidable";
    if ( b ) {
      pair<long long,long long> p = mp[i];
      cout << p.first << ' ' << p.second << endl;
    }
    else {
      cout << ans << endl;
    }
  }
  return 0;
}
