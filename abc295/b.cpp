#include <bits/stdc++.h>
using namespace std;
int R,C;
typedef struct _bomb {
  int r;
  int c;
  int power;
} BOMB;
int distance(int x1, int y1, int x2, int y2){
  return abs(x1-x2) + abs(y1-y2);
}
void explode(vector<vector<char>> &vec, int x, int y, int z){
  for(int i=x-z;i<=x+z;i++){
    if ( i < 0 || i >= R ) {
      continue;
    }
    for(int j=y-z;j<=y+z;j++){
      if ( j < 0 || j >= C ) {
        continue;
      }
      if ( distance(x,y,i,j) <= z ) {
        vec[i][j] = '.';
      }
    }
  }
  return ;
}
int main(void){
  cin >> R >> C ;
  vector<vector<char>> vec(R,vector<char>(C));
  vector<BOMB> bomb;
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
      char c;
      cin >> c;
      vec[i][j] = c;
      if ( c >= '0' && c <='9' ) {
        BOMB b;
        b.r = i;
        b.c = j;
        b.power = int(c-'0');
        bomb.push_back(b);
      }
    }
  }
  for(auto itr : bomb){
    explode(vec,itr.r, itr.c, itr.power);
  }
  //
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
      cout << vec[i][j] ;
    }
    cout << endl;
  }
  return 0;
}
