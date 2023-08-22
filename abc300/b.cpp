#include <bits/stdc++.h>
using namespace std;
int H,W;
bool func(vector<vector<char>> &A, vector<vector<char>> &B, int x, int y){
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if ( A[(x+i)%H][(y+j)%W] != B[i][j] ) {
        return false;
      }
    }
  }
  return true;
}
int main(void){
  cin >> H >> W;
  vector<vector<char>> A(H,vector<char>(W));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin >> A[i][j] ;
    }
  }
  vector<vector<char>> B(H,vector<char>(W));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin >> B[i][j] ;
    }
  }
  string ans = "No";
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      bool ret = func(A,B,i,j);
      if ( ret ) {
        ans = "Yes";
        break;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
