#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W;
  cin >> H >> W ;
  vector<vector<char>> C(H,vector<char>(W,' '));
  vector<vector<int>> numX(H,vector<int>(26,0));
  vector<vector<int>> numY(W,vector<int>(26,0));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      char c ;
      cin >> c;
      C[i][j] = c;
      int key = ( c - 'a' );
      numX[i][key] += 1;
      numY[j][key] += 1;
    }
  }
  int width = W;
  int height = H;
  bool deleted = false;
  do{
    deleted = false;
    vector<pair<int,char>> mrkX(0);
    vector<pair<int,char>> mrkY(0);
    for(int i=0;i<H;i++){
      for(char c='a';c<='z';c++){
        int key = ( c - 'a' );
        if ( numX[i][key] == width && numX[i][key] >= 2 ) {
          pair<int,char> p = make_pair(i,c);
          mrkX.push_back(p);
        }
      }
    }
    for(int i=0;i<W;i++){
      for(char c='a';c<='z';c++){
        int key = ( c - 'a' );
        if ( numY[i][key] == height && numY[i][key] >= 2 ) {
          pair<int,char> p = make_pair(i,c);
          mrkY.push_back(p);
        }
      }
    }
    for(auto itr : mrkX){
      int row = itr.first;
      char c = itr.second;
      int key = ( c - 'a' );
      numX[row][key] -= width;
      for(int col=0;col<W;col++){
        numY[col][key] -= 1;
      }
      height -= 1;
      deleted = true;
    }
    for(auto itr : mrkY){
      int col = itr.first;
      char c = itr.second;
      int key = ( c - 'a' );
      numY[col][key] -= height;
      for(int row=0;row<H;row++){
        numX[row][key] -= 1;
      }
      width -= 1;
      deleted = true;
    }
  }while(deleted);

  int ans = 0;
  /*
  for(auto itr : numX){
    for(char c='a';c<='z';c++){
      int key = ( c - 'a' );
      if ( itr[key] > 0 ) {
        ans += itr[key];
      }
    }
  }
  for(auto itr : numY){
    for(char c='a';c<='z';c++){
      int key = ( c - 'a' ) ;
      if ( itr[key] > 0 ) {
        ans += itr[key];
      }
    }
  }
  cout << ans / 2 << endl;
  */
  ans = height * width ;
  cout << ans << endl;
  return 0;
}
