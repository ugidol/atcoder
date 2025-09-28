#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W;
  cin >> H >> W;
  vector<vector<int>> vec(H,vector<int>(W));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      int a;
      cin >> a;
      vec[i][j] = a;
    }
  }
  //
  for(int i=0;i<W;i++){
    for(int j=0;j<H;j++){
      cout << vec[j][i] << ' ' ;
    }
    cout << endl;
  }
  return 0;
}
