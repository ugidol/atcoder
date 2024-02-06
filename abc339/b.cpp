#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W,N;
  cin >> H >> W >> N;
  vector<vector<char>> g(H,vector<char>(W,'.'));
  int x = 0;
  int y = 0;
  int dir = 0;
  vector<vector<int>> pos = { {-1,0},{0,1},{1,0},{0,-1} };
  for(int i=0;i<N;i++){
    //
    if ( g[x][y] == '.' ) {
      g[x][y] = '#';
      dir += 1;
      dir %= 4;
    }
    else {
      g[x][y] = '.';
      dir += 3;
      dir %= 4;
    }
    x = x + H + pos[dir][0];
    y = y + W + pos[dir][1];
    x %= H;
    y %= W;
  }
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cout << g[i][j];
    }
    cout << endl;
  }
  return 0;
}
