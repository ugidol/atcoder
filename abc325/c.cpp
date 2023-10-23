#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace atcoder;
using namespace std;
int main(void){
  int H,W;
  cin >> H >> W;
  vector<string> g(H);
  for(auto &itr:g){
    cin >> itr;
  }
  vector<vector<int>> matrix(H,vector<int>(W,-1));
  int N=0;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      char c = g[i][j];
      if ( c == '#' ) {
        matrix[i][j] = N;
        N+=1;
      }
    }
  }
  //
  vector<vector<int>> vec = {
    {-1,-1},
    {-1, 0},
    {-1, 1},
    { 0,-1},
    { 0, 1},
    { 1,-1},
    { 1, 0},
    { 1, 1}
  };
  dsu d(N);
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      char c = g[i][j];
      if ( c != '#' ) {
        continue;
      }
      for(auto v:vec){
        int ii = i + v[0];
        int jj = j + v[1];
        if ( ii >= 0 && ii < H && jj >= 0 && jj < W ) {
          char cc = g[ii][jj];
          if ( cc == '#' ) {
            int v = matrix[i][j];
            int vv = matrix[ii][jj];
#ifdef DEBUG
            fprintf(stderr,"merge(%d,%d),(%d,%d)\n",i+1,j+1,ii+1,jj+1);
#endif
            d.merge(v,vv);
          }
        }
      }
    }
  }
  int ans = d.groups().size();
  cout << ans << endl;
  return 0;
}
