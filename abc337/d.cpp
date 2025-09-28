#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W,K;
  cin >> H >> W >> K;
  vector<vector<char>> G(H,vector<char>(W,' '));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      cin >> G[i][j];
    }
  }
  
  int ans = INT_MAX;
  function<void(void)> f = [&](void){
    for(int i=0;i<H;i++){
      vector<int> va(W+1,0);
      vector<int> vb(W+1,0);
      vector<int> vc(W+1,0);
      for(int j=0;j<W;j++){
        va[j+1] = va[j];
        vb[j+1] = vb[j];
        vc[j+1] = vc[j];
        char c = G[i][j];
        if ( c == 'x' ) {
          va[j+1] += 1;
        }
        else if ( c == 'o' ) {
          vb[j+1] += 1;
        }
        else {
          vc[j+1] += 1;
        }
      }
      for(int j=K;j<=W;j++){
        int left = j-K;
        int right = j;
        int a = va[right] - va[left];
        int b = vb[right] - vb[left];
        int c = vc[right] - vc[left];
        if ( a == 0 ) {
          ans = min(ans,c);
        }
      }
    }
  };
  //
  f();
  vector<vector<char>> G2(W,vector<char>(H,' '));
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      G2[j][i] = G[i][j];
    }
  }
  G = G2;
  swap(H,W);
  f();
  //
  if ( ans > K ) {
    ans = -1;
  }
  cout << ans << endl;
  //
  return 0;
}
