#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W;
  cin >> H >> W;
  pair<int,int> S;
  pair<int,int> T;
  vector<vector<char>> A(H,vector<char>(W));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      char c ;
      cin >> c;
      A[i][j] = c;
      if ( c == 'S' ) {
        S.first = i;
        S.second = j;
      }
      else if ( c == 'T' ) {
        T.first = i;
        T.second = j;
      }
    }
  }
  int N;
  cin >> N;
  vector<vector<int>> E(H,vector<int>(W));
  vector<pair<int,int>> vec(N);
  for(int i=0;i<N;i++){
    int r,c,e;
    cin >> r >> c >> e;
    r -= 1;
    c -= 1;
    E[r][c] = e;
    vec[i] = make_pair(r,c);
  }
  //

  vector<vector<int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
  map<pair<int,int>,vector<pair<int,int>>> g;
  set<pair<int,int>> st;
  /* BFS */
  function<vector<pair<int,int>>(int,int,int)> bfs = [&](int x0, int y0, int e){
   
    vector<pair<int,int>> ret;

    vector<vector<int>> dist(H,vector<int>(W,-1));

    queue<pair<int,int>> que;
    /* 探索済みにする */
    dist[x0][y0] = e;
    /* queueにpush */
    que.push(make_pair(x0,y0));

    /* queueが空になるまでループ */
    while(!que.empty()){

      /* queueからpop */
      pair<int,int> p = que.front();que.pop();

      int x = p.first;
      int y = p.second;

      /* エネルギーのあるマス同士を繋ぐ */
      if ( E[x][y] != 0 && ! ( x == x0 && y == y0 ) ) {
        ret.push_back(make_pair(x,y));
      }
      /* ゴール地点に移動できる？ */
      if ( x == T.first && y == T.second ) {
        st.insert(make_pair(x0,y0));
      }

      /* ４方向に探索 */
      for(auto d:dir){
        int xx = x+d[0];
        int yy = y+d[1];
        /* 範囲外？ */
        if ( xx < 0 || xx >= H || yy < 0 || yy >= W ) {
          continue;
        }
        /* 障害物？ */
        if ( A[xx][yy] == '#' ) {
          continue;
        }
        /* 探索済み？ */
        if ( dist[xx][yy] != -1 ) {
          continue;
        }
        /* エネルギーは足りる？ */
        if ( dist[x][y] == 0 ) {
          continue;
        }

        /* 探索済みにする */
        dist[xx][yy] = dist[x][y]-1;
        /* queueにpush */
        que.push(make_pair(xx,yy));
      }
    }
    return ret;
  };
  /* BFS */

  for(auto itr:vec){
    int x = itr.first;
    int y = itr.second;
    int e = E[x][y];
    auto ret = bfs(x,y,e);
    g[make_pair(x,y)] = ret;
  }
#ifdef DEBUG
  for(auto itr:g){
    pair<int,int> k = itr.first;
    fprintf(stderr,"{%d,%d}=",k.first,k.second);
    for(auto itr2:itr.second){
      pair<int,int> v = itr2;
      fprintf(stderr,"{%d,%d},",v.first,v.second);
    }
    fprintf(stderr,"\n");
  }
  fprintf(stderr,"S={%d,%d}\n",S.first,S.second);
  for(auto itr:st){
    int x = itr.first;
    int y = itr.second;
    fprintf(stderr,"T={%d,%d}\n",x,y);
  }
#endif

  set<pair<int,int>> visited;
  /* DFS */
  function<bool(int,int)> dfs = [&](int x0, int y0){
#ifdef DEBUG
    fprintf(stderr,"{%d,%d}\n",x0,y0);
#endif

    /* 探索済みにする */
    visited.insert(make_pair(x0,y0));

    /* ゴール地点に移動可能な点か？ */
    if ( st.count(make_pair(x0,y0)) > 0 ) {
      return true;
    }

    /* BFSで繋いだぶんだけ探索 */
    bool ret = false;
    for(auto itr:g[make_pair(x0,y0)]){
      /* 探索済みは探索しない */
      if ( visited.count(itr) > 0 ) {
        continue;
      }
      /* 再帰 */
      bool b = dfs(itr.first,itr.second);
      if ( b ) {
        ret = b;
        break;
      }
    }
    return ret;
  };
  /* DFS */

  /* スタート地点にエネルギーが無ければ"No" */
  bool has = false;
  for(auto itr:vec){
    if ( S == itr ) {
      has = true;
    }
  }

  /* スタート地点→ゴール地点？ */
  bool ans = false;
  if ( has ) {
    ans = dfs(S.first,S.second);
  }
  
  if ( ans ) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
