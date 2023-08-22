#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M,H,K;
  cin >> N >> M >> H >> K;
  string S;
  cin >> S;
  set<pair<int,int>> st;
  for(int i=0;i<M;i++){
    int x,y;
    cin >> x >> y;
    pair<int,int> p = make_pair(x,y);
    st.insert(p);
  }
  //
  //
  string ans = "Yes";
  int x = 0;
  int y = 0;
  for(int i=0;i<N;i++){
    char c = S[i];
    if ( c == 'R' ) {
      x += 1;
    }
    else if ( c == 'L' ) {
      x -= 1;
    }
    else if ( c == 'U' ) {
      y += 1;
    }
    else if ( c == 'D' ) {
      y -= 1;
    }
    H -= 1;
    if ( H < 0 ) {
      ans = "No" ;
      break;
    }
    if ( H < K ) {
      pair<int,int> p = make_pair(x,y);
      if ( st.find(p) != st.end() ) {
        st.erase(p);
        H = K;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
