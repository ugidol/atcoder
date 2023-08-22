#include <bits/stdc++.h>
using namespace std;
int main(void){
  int H,W;
  cin >> H >> W ;
  vector<string> S(H);
  for(int i=0;i<H;i++){
    string s;
    cin >> s;
    S[i] = s;
  }
  //
  pair<int,int> ans ;
  int tmp_h = 0;
  vector<int> cnt_h(H);
  for(int i=0;i<H;i++){
    int cnt = 0;
    for(int j=0;j<W;j++){
      if ( S[i][j] == '#' ) {
        cnt += 1;
      }
    }
    cnt_h[i] = cnt;
    tmp_h = max(tmp_h, cnt);
  }
  for(int i=0;i<H;i++){
    if ( cnt_h[i] == tmp_h - 1 ) {
      ans.first = i;
    }
  }
  int tmp_w = 0;
  vector<int> cnt_w(W);
  for(int j=0;j<W;j++){
    int cnt = 0;
    for(int i=0;i<H;i++){
      if ( S[i][j] == '#' ) {
        cnt += 1;
      }
    }
    cnt_w[j] = cnt;
    tmp_w = max(tmp_w, cnt);
  }
  for(int i=0;i<W;i++){
    if ( cnt_w[i] == tmp_w - 1 ) {
      ans.second = i;
    }
  }
  cout << ans.first + 1 << ' ' << ans.second + 1 << endl;
  return 0;
}
